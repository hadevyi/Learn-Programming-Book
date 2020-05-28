<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AboutMe.aspx.cs" Inherits="AboutMe" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
    .style7
    {
        width: 100%;
    }
    .style8
    {
        width: 268px;
        text-align: center;
    }
    .style9
    {
        color: #CC00FF;
    }
    .style10
    {
        font-size: medium;
    }
    .style11
    {
        width: 100%;
        border: 1px solid #000000;
        background-color: #CCCCFF;
    }
    .style12
    {
        width: 180px;
        text-align: center;
        font-weight: bold;
    }
</style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <br />
<table class="style7">
    <tr>
        <td class="style8">
            <asp:Image ID="Image2" runat="server" ImageUrl="~/image/20163131.jpg" />
        </td>
        <td class="style9" style="text-align: center">
            <span class="style10"><strong>Computer Engineering, Inje University.</strong></span><strong 
                style="font-size: small"><br />
            인제대학교 컴퓨터 공학부 1학년</strong></td>
    </tr>
</table>
<br />
<br />
<table class="style11">
    <tr>
        <td class="style12" style="background-color: #FFFFFF">
            Name</td>
        <td style="background-color: #FFFFFF">
            Dang Hyeon-a</td>
    </tr>
    <tr>
        <td class="style12" style="background-color: #FFFFFF">
            High-School</td>
        <td style="background-color: #FFFFFF">
            SamHyeon (Jin-ju)</td>
    </tr>
    <tr>
        <td class="style12" style="background-color: #FFFFFF">
            Phone Number</td>
        <td style="background-color: #FFFFFF">
            010.****.****</td>
    </tr>
    <tr>
        <td class="style12" style="background-color: #FFFFFF">
            E-mail</td>
        <td style="background-color: #FFFFFF">
            dang0113@naver.com</td>
    </tr>
    <tr>
        <td class="style12" style="background-color: #FFFFFF">
            University</td>
        <td style="background-color: #FFFFFF">
            Inje (Gim-Hea)</td>
    </tr>
</table>
<br />
<br />
<br />
</asp:Content>

