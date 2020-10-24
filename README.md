# Basic_ASP.NET

## ASP.NET basic course using C#

<div align="right">
<a href="https://hits.seeyoufarm.com"/><img src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https://github.com/eona1301/Basic_ASP.NET"/></a>
</div>

- Tool : Visual Studio 2015
- Class : 2016.08.29 ~ 2016.12.19
- With development using C# Window Web Form, you can develop a web site you want through basic use of Database and its use.

## Configuration

All Chapters are attached to the entire project.

For convenient understanding of ASP, it is important to learn in order according to the order of **contents**, and it is a concept that proceeds together using a database rather than a simple page creation, so a detailed understanding of this is also required.

<br>

## Procedure List

| Chapter |         Main         | Detail                                         |
| :-----: | :------------------: | ---------------------------------------------- |
|   01    |     What is ASP      |                                                |
|   02    | What is Master Page? |                                                |
|   03    |   Configuring aspx   |                                                |
|   04    |    First project     | First Handler, bgcolor, table, layer, calendar |
|   05    |   Event Handler 1    | Button, CheckBox, RadioButton, ImageButton     |
|   06    |   Event Handler 2    | ListBox Overlap, CheckBox, RadioButton go-over |
|   07    |   Validator Error    | RequiredField, Radnge, Comare, etc.            |
|   08    |   Database Setting   | How to use mySQL, mySQL CUDA                   |
|   09    |   Data in Database   | View linkage, DataList, DataTable              |
|   10    |    DB utilization    | Database write, list-Record Insert             |

<br>

## How to install pubs DB

: Needed from Chapter 08

1. Run from command prompt window

   ```
   i) Creating a PUBS database using the instpubs.sql file on the SQLEXPRESS server
      C:\\Documents and Settings\\admin>sqlcmd -S .\\SQLEXPRESS -i C:\\instpubs.sql

   ii) Create the northwind database using the instnwnd.sql file on the SQLEXPRESS server.
      C:\\Documents and Settings\\admin>sqlcmd -S .\\SQLEXPRESS -i C:\\instnwnd.sql

   * Case sensitive when executing commands
   * Here the two sql files are located in the root of the C driver.
   ```

2. Run in SQL Server Management Studio Express

   ```
   i) Download SQLServer@@@@_SSMSEE.msi file and install Management Studio Express
   ii) Double-click the instpubs.sql file and click the Run icon of Management Studio Express.

   * @@@@ = version
   ```
