<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 7-6-1.aspx.cs" Inherits="Chapter_7_pro_7_6_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 73%;
        }
        .style8
        {
            width: 222px;
        }
        .style9
        {
            width: 47px;
        }
        .style10
        {
            width: 47px;
            color: #FF0000;
            height: 95px;
        }
        .style11
        {
            color: #FF0000;
        }
        .style12
        {
            height: 95px;
        }
        .style13
        {
            width: 222px;
            height: 95px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <strong style="font-size: 30px;">ValidationSummary 컨트롤 실습</strong></p>
    <p>
        Credit Card 정보</p>
    <table class="style7">
        <tr>
            <td>
                카드 형태 :
            </td>
            <td class="style8">
                <asp:RadioButtonList ID="RadioButtonList1" runat="server">
                    <asp:ListItem>Mastercard</asp:ListItem>
                    <asp:ListItem>Visa</asp:ListItem>
                </asp:RadioButtonList>
            </td>
            <td class="style9">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="RadioButtonList1" CssClass="style11" 
                    EnableClientScript="False" ErrorMessage="카드 형태 오류">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td>
                카드 번호 :
            </td>
            <td class="style8">
                <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            </td>
            <td class="style9">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                    ControlToValidate="TextBox1" CssClass="style11" EnableClientScript="False" 
                    ErrorMessage="카드 번호 오류">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td>
                유효 기간 :
            </td>
            <td class="style8">
                <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            </td>
            <td class="style9">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                    ControlToValidate="TextBox2" CssClass="style11" EnableClientScript="False" 
                    ErrorMessage="유효 기간 오류">*</asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style12">
                <asp:ValidationSummary ID="ValidationSummary1" runat="server" 
                    EnableClientScript="False" />
            </td>
            <td class="style13">
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="확인" />
            </td>
            <td class="style10">
            </td>
        </tr>
    </table>
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />
</asp:Content>

