git init => To add the folder in git
git status => To see all the files and which are tracking or not
git add File_name => To add the file in staging area before commit in git 
git add . => To add all the files on this folder in staging area
git commit -m “Massage” => To commit the file and sending the massage about the commit
git log => To see all the commits, there Hascode and there details
git checkout <Hascode> => To see the previous stages before commit
git checkout master => To return to present stage
git branch => To see the branch name
git branch <new branch name> => To create a new branch
git checkout <branch name> => To change branch
git checkout -b <new branch> => To create an branch and switch to that branch
**Every branch have their own copy of files, they can’t know other branches changes
git merge <branch1 > => To marge or apply changes of the files with  branch1 files to current brunch
** Create a .gitignore file and add the file names you don’t want to add to git and don’t want to see in git status
git remote add <name> <github_link> =>
git branch -m main <BRANCH>
git fetch origin
git branch -u origin/<BRANCH> <BRANCH>
git remote set-head origin -a


Get started by creating a new file or uploading an existing file. We recommend every repository include a README, LICENSE, and .gitignore.
…or create a new repository on the command line
echo "# Daily-Codes" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/nill172/Daily-Codes.git
git push -u origin main
git push –force     ##for forcefully push to github
…or push an existing repository from the command line
git remote add origin https://github.com/nill172/Daily-Codes.git
git branch -M main
git push -u origin main
…or import code from another repository
You can initialize this repository with code from a Subversion, Mercurial, or TFS project.




