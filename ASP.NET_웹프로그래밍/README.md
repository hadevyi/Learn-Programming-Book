## ASP.NET 웹 프로그래밍

<div align="right">
<a href="https://hits.seeyoufarm.com"/><img src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https://github.com/eona1301/Basic_ASP.NET"/></a>
</div>

- 학습환경 : Visual Studio 2015
- 학습기간 : 2016.08.29 ~ 2016.12.19
- C# Window Web Form의 문법을 그대로 사용하면서, 데이터베이스의 기본 사용을 추가적으로 학습하여 원하는 웹 사이트를 개발할 수 있습니다.

## 정리

모든 챕터는 전체 프로젝트에 첨부되어 있습니다.

ASP의 편리한 이해를 위해서는 **내용**의 순서에 따라 순서대로 학습하는 것이 중요하며, 간단한 페이지 작성보다는 데이터베이스를 이용해 함께 진행하는 개념이기 때문에 데이터베이스에 대한 이해도 필요합니다.

<br>

## 학습 세부 리스트


| 챕터  |       제목        | 내용                                       |
| :---: | :---------------: | ------------------------------------------ |
|  01   |      ASP란?       |                                            |
|  02   |  Master Page란?   |                                            |
|  03   |     aspx 설정     |                                            |
|  04   | Project 시작하기  | Handler, bgcolor, table, layer, calendar   |
|  05   |  Event Handler 1  | Button, CheckBox, RadioButton, ImageButton |
|  06   |  Event Handler 2  | ListBox 중복, CheckBox, RadioButton        |
|  07   |     에러 확인     | RequiredField, Radnge, Comare, etc.        |
|  08   | Database Setting  | mySQL 설정 및 CUDA                         |
|  09   |   Data 표출하기   | View linkage, DataList, DataTable          |
|  10   | Database 활용하기 | Database 데이터 추가, list-Record 추가하기         |

<br>

## How to install pubs DB

: Chapter 08부터 필요합니다.

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
