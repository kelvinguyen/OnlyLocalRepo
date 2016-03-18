// What is git?
--> version control system

--> Basix Git Commands
	- init : use to create a repository
	- status : current state of your local repository, none commit change
	- add : add file to the local repository
	- commit : how you commiting to your local repository
	- log : how you see change that have been committed
	- push : is the command to push your change that you have commit locally up to the 		 central repository
	- pull : pull change down from other repository
	- merge : merge change that come in from separate places , branches

--> Git command demo
	// clone a project from github to your local repository
	> git clone https://github.com/brendanPluralsight/cdm-demo.git

//Github
--> What is Github?
	- it's a server/hub for hosting Git-based project
--> Setup Github
	- GoTo: https://github.com
	- download set-it-up for window version for local Github IDE
	- create account on github website
		--> create a repository
			- give name to your repository
			- add gitignore specify to what programing language
			- add license

--> account and organization
	- account : individual user
	- organization : a group of account
	--> convert your account to organization or create organization in account setting

// git command and config
	--> mkdir GitFoler // create a folder
	--> git --version // check the version
	--> git init // create a local repository
      // system level
	--> git config --system // stored in c:\Program Files(x86)\Git\etc\gitconfig
      // user level
  --> git config --global // stored in c:\Users\Kelvin Nguyen\.gitconfig
      // repository configuration
  --> git config // stored in .git/config in each repo
      // check your configuration
  --> cat ~/.gitconfig ///list all the configuration that you have
      //
  --> git config user.name "kelvin nguyen" //set up name for your repo
  --> git config user.email "kelvinguyen@hotmail.com" // set up email for your repo
      //
  --> git config --global core.editor notepad2 // set up editor for user level
  --> git config --global help.autocorrect 1 // set autocorrect for your user at 1 second
  --> git config --global color.ui auto // set multi color to auto
  --> git config --global core.autocrlf true|false|input // set carraige return line feed
      //
  --> git diff abcdef..syezkl // using SHA to check the different between 2 version
  --> git diff HEAD~1..HEAD // HEAD is latest version, HEAD~1 : a version before lastest one
      //
  --> git checkout testfile.c // revert what you did to previous version
      //
  --> rm file.txt // remove a file
      //
  --> git reset --hard // reset everthing back to the head version
  --> git reset --soft Head~2 // reset everything back to 2 version before head
      //
  --> touch text1.txt text2.txt // create text file
      //
  --> git clean -f // delete all file that haven't git add to staging
      //
  --> vim file.txt // for editing your file
                   // i : inserting mode 
                   // ESC : exiting insert mode
                   // :wp : exit vim back to cmd
      //
  --> git clone https://github.com/jquery/jquery.git // clone it to my local repository
      //
  --> git branch // check all branch
      // add existing remote repo in github
  --> git remote add origin https://github.com/kelvinguyen/GitFundermental.git  
      //
  --> git push --set-upstream //github.com/kelvinguyen/GitFundermental.git master
<<<<<<< HEAD
      
      
=======
      
      
>>>>>>> kelvinFeature1
-------------------------------------------------------------
//branching

--> git log --graph --all --decorate --oneline //display all branch and commit
    --> git config --global alias.lga "log --graph --all --decorate" // create alias name
    --> git lga // lga will replace it with the string you set up
<<<<<<< HEAD

--> git branch kelvinFeature1 //create a kelvinFeature1 branch
--> git checkout kelvinFeature1 // switch the branch
--> git branch kelvinbranch 971236 // create a branch and point to whatever commit version that you like
--> git checkout -b feature2 // create a branch feature2 and switch to that branch

--> git reflog  //where you can see all branch that you delete

--> git stash // saving change on stash , not on staging
--> git stash list // display all pending change on stash

=======
>>>>>>> kelvinFeature1
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	