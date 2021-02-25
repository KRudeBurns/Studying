[[_TOC_]]

# Notes on GIT.

- You do not have to use github for git. Github is a collection of repositories.
- GIT is a tool that allows your to manage your repository, be it on github, or elsewhere.



## Setting Up

- Download git and follow the default setup. 
- A good install walkthrough is [this youtube video](https://www.youtube.com/watch?v=J_Clau1bYco)
- A good tutorial I used for setting up my global configs is found in the [GIT-SCM Book](https://git-scm.com/book/en/v2/Getting-Started-First-Time-Git-Setup)



## Cloning my First Repo

- The guide I used for this tutorial was [This video from the GIT playlist](https://www.youtube.com/watch?v=OZEGnam2M9s&list=PLu-nSsOS6FRIg52MWrd7C_qSnQp3ZoHwW&index=1)
- The first guide I sued for my first cloning activity was the [set-up video](https://www.youtube.com/watch?v=J_Clau1bYco) 
- the command is simple `git clone <repo's link>`

 ### Changes to the Cloned Repo

- After updating a file(s) from the repo, I saved my changes by adding them for commit

  `git add <file name>`

- After adding the change, then I could commit, which only saves it to my local repo.

  `git commit -m "a made a change"`

- When the commit is done, my change is saved on my local repo

### Sharing my changes

- The world wants my changes!!! I need to share it.

- What I share is going to be pushed to the master repo. So I must be careful my work is good.

  - Most repos do not allow you to push to their master. In act, they should not allow that.

- To do this I will first check my local repo's status vs the remote repo's status.

  `git status`

- If I am ahead or behind, I will be told accordingly, compared to this image.

  ![image-20200929123733340](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200929123733340.png)

- To send my changes to the remote repo, I will do a `git push`

## My First Git Repo

Still working off this [GIT Tutorial's playlist](https://www.youtube.com/playlist?list=PLu-nSsOS6FRIg52MWrd7C_qSnQp3ZoHwW) I am on [video 2](https://www.youtube.com/watch?v=gQSd2lFkZHk) 

- Creating my first repo is done locally. So this is not a remote repo. Local only to my system.

- I created a hello world repo, and made a hello world program.

### Issues with make

#### Error: make not found

I created a make file to build my hello world program. However the first error ` -make not found`. This was weird. 

- Solution was to install make to the local git directory. following [this instructions](https://stackoverflow.com/questions/36770716/mingw64-make-build-error-bash-make-command-not-found/43779544#43779544) to use ezwinport.
- Second, you have to restart git bash, otherwise, even though make is found, you will have errors compiling. Otherwise you will have the second error:

#### Error: make (e=2): The system cannot find the file specified.

This one was confusing as heck. Make was not working in my git bash. 

- If you have g++ et al installed on your system, the you can try running make in cmd or powershell. They both worked. 
- Restart bash if you did not restart it after installing make. Once I did that, I had no more problems. 

### .Gitignore

I did not know this was important. So you use .gitignore to tell your git to ignore certain files when giving me a status update. 

- For instance I do not want to add & commit my .exe files to my repo after compiling. By formatting my .gitignore file I will be able to silence any messages about my .exe files.

- Github creates a .gitignore file for me. When doing pure command line git, I have to manually do this myself. 

  - create a file called .gitignore (the period (.) before the file name tells bash that this is a system file and thus ls will not reveal the file; but ls -a will reveal hidden files)
  - Edit the .gitignore to add all files that it needs to ignore. In my case, I made it ignore *.exe files. 

  ![image-20200929140526468](C:\Users\kufre\AppData\Roaming\Typora\typora-user-images\image-20200929140526468.png)



### Reverting back to original

If I want discard changes in the directory, I have two options

- `git checkout <file>` will checkout the last committed version of the file, and discard changes in the working directory
- `git restore <file>` will do the same as git checkout. 



## GIT HISTORY

all of Gits history is stored in a hidden folder called `.git`. Everything is done in that folder. All the data is stored as compressed objects, and git pulls information from the objects.













