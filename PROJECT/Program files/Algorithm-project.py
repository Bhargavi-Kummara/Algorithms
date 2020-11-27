#!/usr/bin/env python
# coding: utf-8

# In[4]:


import cv2
import glob
import matplotlib.pyplot as plt
import  numpy as np
#from PIL import Image

img_data = []
files = glob.glob("D:\Pictures\cats\*.JPG")
for myFile in files:
    print(myFile)
    image = cv2.imread(myFile)
    img_data.append(image)
    print("Image shape: ", image.shape)
    img = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    plt.imshow(img)
    plt.show()
    print(np.array(img))
    
#print(np.array(img_data))


# In[5]:


from PIL import Image

img_size = []
files = glob.glob("D:\Pictures\cats\*.JPG")
for myFile in files:
    im = Image.open(myFile) #path to image file
    width, height = im.size
    resolution = width*height
    img_size.append(resolution)
    
print(img_size)


# In[6]:


#Creating a dictionary which takes multiple values for same key and stores in a list corresponding to that key
from collections import defaultdict

res_dict = defaultdict(list)
for Key, Value in zip(img_size,img_data):
    res_dict[Key].append(Value)
    
print(dict(res_dict))


# In[7]:


# Python program for implementation of Quicksort Sort

# This function takes last element as pivot, places
# the pivot element at its correct position in sorted
# array, and places all smaller (smaller than pivot)
# to left of pivot and all greater elements to right
# of pivot


def partition(arr, low, high):
    i = (low-1)          # index of smaller element
    pivot = arr[high]    # pivot

    for j in range(low, high):

        # If current element is smaller than or
        # equal to pivot
        if arr[j] <= pivot:

            # increment index of smaller element
            i = i+1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)


# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low --> Starting index,
# high --> Ending index

# Function to do Quick sort

def quickSort(arr, low, high):
    if len(arr) == 1:
        return arr
    if low < high:

        # pi is partitioning index, arr[p] is now at right place
        pi = partition(arr, low, high)

        # Separately sort elements before
        # partition and after partition
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)


# Driver code to test above
n = len(img_size)
quickSort(img_size, 0, n-1)
print("Sorted size of images is:")
for i in range(n):
    print("%d" % img_size[i]),


# In[8]:


#Remove duplicate sizes from img_size
def remove(duplicate):
    final = []
    for num in duplicate:
        if num not in final:
            final.append(num)
    return final


final_size = remove(img_size)
print("Image sizes after removing duplicates:\n", final_size)


# In[10]:


# Sorting images and displaying

key = list(res_dict.keys())
val = list(res_dict.values())
print("Printing keys: ", key)
print("Printing values: ", val)

print("Images after sorting:\n\n")
for j in range(len(final_size)):
    #print("j iteration: ", j)
    for k in range(len(key)):
        #print("k iteration: ", k)
        if final_size[j] == key[k]:
            print("Image size: ", final_size[j])
            print("Size matched")
            for item in val[k]:
                Img = cv2.cvtColor(item, cv2.COLOR_BGR2RGB)
                plt.imshow(Img)
                plt.show()            


# # Searching an image : 
# 
# ### To search an image from our list of 15 images, let us try to match the width and height of new image to the width and height of images in our list of images.

# In[16]:


import matplotlib.pyplot as plt 
import glob
import cv2

new_image = cv2.imread('Pictures/image5.jpg')
print("Image to be seached is below:")
print("Dimensions of image: ", new_image.shape)
img = cv2.cvtColor(new_image, cv2.COLOR_BGR2RGB)
plt.imshow(img)
plt.show()

flag = 0
print("Searching started:\n")
files = glob.glob("D:\Pictures\cats\*.JPG")
for myFile in files:
    search = cv2.imread(myFile) 
    if search.shape == new_image.shape:
        print("\nMatching dimensions found at: ", myFile)
        print("Images have same shape...Let's check if they have same pixel values")
        difference = cv2.subtract(search, new_image)
        b, g, r = cv2.split(difference)
        if cv2.countNonZero(b) == 0 and cv2.countNonZero(g) == 0 and cv2.countNonZero(r) == 0:
            flag = 1
            print("YES! The images are completely EQUAL")
            found = cv2.cvtColor(search, cv2.COLOR_BGR2RGB)
            plt.imshow(found)
            plt.show()
        else:
            print("Pixel values are not same!\n")
    elif flag == 1:
        break
    else:
        print("Image not found at: ", myFile)


# In[ ]:




