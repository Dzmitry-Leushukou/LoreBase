The project made like a open-source analog of fandom.com

## Functionality

User functionality:
- Login
- Register
- Logout
- Look all comments that he made
- Look comments in comment section of article
- Write a comment
    - Simple comment
    - Answer to another comment
- Edit own comment
- Delete own comment
- Create a new article (sub-article)
- Sugest edits to the existed article
- Create a new article (sub-article)
- Sugest edits to the existed article
- Check all versions of article
- Check diff between versions
- Send a report
- Check status of reports (Like "Rejected", "Accepted")
- Search an article by the text that users write in text-line

Admin functionality:
- Admin login
- Admin logout
- Delete comment by any user 
- Verify edits
- Check reports lists 
- Check report
- Verify reports
- List of reports by any user
- Download image located in article page
- Upload own image in atricle
- Set a profile image
- Upload profile
- Check all user edits
- Ban users
- Unban users
- Check logs of any user  
**+ Full user functioniality**

## Technical Description
### Stack:
- C++20/Drogon
- Redis
- Postgre
- MinIO

### Project structure:
~~~
Admin/Moderator features implemented in this service and underlined. Use this functions required a special token 
~~~

- **User Service**
Requirements (Due to this service USER CAN):  
    - Login
    - Register
    - Logout
    - ~~Admin login~~
    - ~~Admin logout~~
    - Upload profile
    - Check all user edits
    - ~~Ban users~~
    - ~~Unban users~~ 


- **Article Service**
Requirements (Due to this service USER CAN):  
    - Create a new article (sub-article)
    - Sugest edits to the existed article
    - Check all versions of article
    - Check diff between versions
    - Search an article by the text that users write in text-line
    - ~~Verify edits~~ 


- **Comment Service** 
    - Look all comments that any user made
    - Look comments in comment section of article
    - Write a comment
        - Simple comment
        - Answer to another comment
    - Edit own comment
    - Delete own comment
    - ~~Delete comment by any user~~ 
    
- **Report Service** 
Requirements (Due to this service USER CAN):  
    - Send a report
    - Check status of reports (Like "Rejected", "Accepted")
    - ~~Check reports lists~~ 
    - ~~Check report~~
    - ~~Verify reports~~ 
    - ~~List of reports by any user~~ 

- **Gateway Service**
Route every request