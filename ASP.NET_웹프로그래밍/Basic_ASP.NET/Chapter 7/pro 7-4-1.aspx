<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 7-4-1.aspx.cs" Inherits="Chapter_7_pro_7_4_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 50%;
        }
        .style10
        {
            width: 160px;
        }
        .style12
        {
            width: 160px;
            text-align: center;
        }
        .style13
        {
            width: 176px;
            text-align: center;
        }
        .style14
        {
            width: 176px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        ComareValidator 컨트롤 실습</p>
    <p>
        &nbsp;</p>
    <p>
        패스워드를 입력하세요.</p>
    <table class="style7">
        <tr>
            <td class="style12">
                패스워드</td>
            <td class="style13">
                패스워드 확인</td>
        </tr>
        <tr>
            <td class="style10">
&nbsp;<asp:TextBox ID="TextBox1" runat="server" TextMode="Password"></asp:TextBox>
            </td>
            <td class="style14">
&nbsp;<asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td class="style10">
                &nbsp;</td>
            <td class="style14">
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="유효성 검사" />
            </td>
        </tr>
    </table>
    <p>
        <asp:Label ID="Label1" runat="server"></asp:Label>
        <asp:CompareValidator ID="CompareValidator1" runat="server" 
            ControlToCompare="TextBox1" ControlToValidate="TextBox2" 
            EnableClientScript="False"></asp:CompareValidator>
    </p>
</asp:Content>

