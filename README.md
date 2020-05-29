# Basic_ASP.NET
### C#을 활용한 [ASP.NET](http://asp.NET) 기초 과정

### <개요>

- Tool : Visual Studio 2015
- Class : 2016.08.29 ~ 2016.12.19
- C# Window Web Form을 활용한 개발로 Database의 기본적인 사용과 그 활용을 통해 원하는 웹 사이트를 개발할 수 있다. 해당 과정들을 진행할 수 있도록 하는 전체 진행 과정이다.

---

### <구성>

프로젝트 전체에 모든 Chapter가 함께 첨부되어 있는 형식입니다.

ASP의 순차대로의 이해가 편리하기 위해서는 <내용>의 순서에 따라 순서대로 학습하는게 중요하며, 단순 페이지 제작 후 연결이 아닌 Database를 활용해 같이 진행하는 개념이기에 이에 대한 세부적인 이해도 필요합니다.

---

### <내용>

- Chapter 01. ASP란
- Chapter 02. Master Page란?
- Chapter 03. aspx 구성하기
- Chapter 04. 프로젝트 첫 실행 하기 - 최초 Handler, bgcolor, table, layer, calendar
- Chapter 05. Event Handler - Button, CheckBox, RadioButton, ImageButton, DropdwonList, View, AutoTable
- Chapter 06. ListBox Overlap, CheckBox, RadioButton go-over
- Chapter 07. Validator Error - RequiredField, Radnge, Comare, RegularExpression, ValidationSummary
- Chapter 08. Database Setting - mySQL 사용방법, data record, update, select 등 record
- Chapter 09. Database 내의 Data - View 연동, DataList, DataTable
- Chapter 10. Database write, list - Record Insert

---

### <pubs DB 설치 방법>

: Chapter 08부터 필요

1. 명령프롬트창에서 실행

    ```
    i) SQLEXPRESS 서버에 instpubs.sql 파일을 이용하여 PUBS 데이터베이스 만들기
       C:\\Documents and Settings\\admin>sqlcmd -S .\\SQLEXPRESS -i C:\\instpubs.sql

    ii) SQLEXPRESS 서버에 instnwnd.sql 파일을 이용하여 northwind 데이터베이스 만들기
       C:\\Documents and Settings\\admin>sqlcmd -S .\\SQLEXPRESS -i C:\\instnwnd.sql

    * 명령 실행시 대소문자 구별함
    * 여기서 두개의 sql 파일의 위치는 C 드라이버의 루트에 위치
    ```

2. SQL Server Management Studio Express 에서 실행

    ```
    i) SQLServer@@@@_SSMSEE.msi 파일을 다운 받아 Management Studio Express 설치
    ii) instpubs.sql 파일을 더블클릭하여 Management Studio Express 의 실행 아이콘 클릭

    * @@@@은 버전임
    ```
