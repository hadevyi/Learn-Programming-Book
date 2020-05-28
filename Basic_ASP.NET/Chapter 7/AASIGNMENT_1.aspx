<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_1.aspx.cs" Inherits="Chapter_7_AASIGNMENT_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 64%;
        }
        .style8
        {
            width: 90px;
            text-align: center;
        }
        .style9
        {
            width: 90px;
            text-align: center;
            height: 23px;
        }
        .style10
        {
            height: 23px;
        }
        .style11
        {
            width: 90px;
            text-align: center;
            height: 24px;
        }
        .style12
        {
            height: 24px;
        }
        .style13
        {
            width: 173px;
        }
        .style14
        {
            height: 23px;
            width: 173px;
        }
        .style15
        {
            height: 24px;
            width: 173px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <table class="style7">
        <tr>
            <td class="style8">
                &nbsp;</td>
            <td class="style13" style="text-align: center">
                회원 정보</td>
            <td style="text-align: center">
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style8">
                ID</td>
            <td class="style13">
                <asp:TextBox ID="TextBox1" runat="server">20163131</asp:TextBox>
&nbsp;
            </td>
            <td>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="TextBox1" ErrorMessage="ID 정보 누락" 
                    style="color: #FF0000">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style8">
                비밀 번호</td>
            <td class="style13">
                <asp:TextBox ID="TextBox2" runat="server" TextMode="Password"></asp:TextBox>
&nbsp;
            </td>
            <td>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                    ControlToValidate="TextBox2" ErrorMessage="비밀 번호 정보 누락" 
                    style="color: #FF0000">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style9">
                이름</td>
            <td class="style14">
                <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
&nbsp;
            </td>
            <td class="style10">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                    ControlToValidate="TextBox3" ErrorMessage="이름 정보 누락" 
                    style="color: #FF0000">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style11">
                성별</td>
            <td class="style15">
                <asp:RadioButtonList ID="RadioButtonList1" runat="server" Height="16px" 
                   Width="70px">
                    <asp:ListItem>남</asp:ListItem>
                    <asp:ListItem>여</asp:ListItem>
                </asp:RadioButtonList>
            </td>
            <td class="style12">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" 
                    ControlToValidate="RadioButtonList1" ErrorMessage="성별 정보 누락" 
                    style="color: #FF0000">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style11">
                &nbsp;</td>
            <td class="style15">
                <asp:Button ID="Button1" runat="server" Text="Submit" />
            </td>
            <td class="style12">
                &nbsp;</td>
        </tr>
    </table>
    <asp:ValidationSummary ID="ValidationSummary1" runat="server" 
        ShowMessageBox="True" ShowSummary="False" />
    <br />
</asp:Content>

