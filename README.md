## Creating C Libraries from Scratch in C following the Norminette([https://github.com/42School/norminette](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf))

## Description: 
            Recreating and reproducing the behaviours of function from Standard C library 
## Any kind of update / helping me optimize my code is welcomed !!             

## To run and create the library 
        ``` make all

## Output for my Makefile without using Echo as multiline comment
   
   
<img src="https://user-images.githubusercontent.com/66947064/172187096-b93cabea-adb6-4390-adce-16b46ec1208e.png" width="350" height="350">


## To uninstall the Object files
            ``` make clean
            
##Output:

<img src="https://user-images.githubusercontent.com/66947064/172187232-19d993c1-d41f-431a-b285-9ecf41890912.png" width="600" height="100">
            
## To completely Uninstall the Library(libft.a) 
             ```c make fclean
 
 <img src="https://user-images.githubusercontent.com/66947064/172187267-144e9904-383c-4e2a-a346-ed7da795b5c4.png" width="350" height="350">
 
 
## To compile the function with your main run this after doing the previous step
            ```make ft_*.c libft.a
           
## I have duplicated version in my Code with my Own Written Main Function during Evaluation -->> To clean it out add this in makefile(Becareful though):
            ``` remove: 
                      rm -rf *copy.c 
                .PHONY: remove
After adding the rule run ```make remove. ``` After that run make


--------->>>>>>>> If you have suggestions how to optimize them any kind of suggestions are welcome. I tried to do the libft using 4 testers.
