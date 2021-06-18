<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 7-2-1.aspx.cs" Inherits="Chapter_7_pro_7_2_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 99%;
        }
        .style8
        {
            width: 80px;
            text-align: right;
        }
        .style11
        {
            color: #FF0000;
            font-size: small;
        }
        .style12
        {
            width: 297px;
        }
        .style13
        {
            width: 80px;
            height: 25px;
            text-align: right;
        }
        .style14
        {
            height: 25px;
            width: 118px;
        }
        .style15
        {
            width: 80px;
            height: 23px;
            text-align: right;
        }
        .style16
        {
            height: 23px;
            width: 118px;
        }
        .style17
        {
            width: 297px;
            height: 23px;
        }
        .style18
        {
            width: 118px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <strong>RequiredFieldvalidator 컨트롤 실습</strong></p>
    <table class="style7">
        <tr>
            <td class="style15">
                이름 :
            </td>
            <td class="style16">
                <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            </td>
            <td class="style17">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="TextBox1" CssClass="style11" EnableClientScript="False" 
                    ErrorMessage="이름을 입력하세요."></asp:RequiredFieldValidator>
&nbsp;<asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
                    ControlToValidate="TextBox1" CssClass="style11" 
                    ErrorMessage="한글 이름 3~4글자를 입력하세요." ValidationExpression="[가-힣]{3,4}"></asp:RegularExpressionValidator>
            </td>
        </tr>
        <tr>
            <td class="style8">
                학과 :</td>
            <td class="style18">
                <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            </td>
            <td class="style12">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                    ControlToValidate="TextBox2" CssClass="style11" EnableClientScript="False" 
                    ErrorMessage="학과를 입력하세요"></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style8">
                자기소개 :
            </td>
            <td class="style18">
                <asp:TextBox ID="TextBox3" runat="server" Height="85px"></asp:TextBox>
            </td>
            <td class="style12">
            </td>
        </tr>
        <tr>
            <td class="style8">
                전화번호 :
            </td>
            <td class="style18">
                <asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
            </td>
            <td class="style12">
                <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" 
                    ControlToValidate="TextBox4" CssClass="style11" EnableClientScript="False" 
                    ErrorMessage="전화번호를 입력하세요."></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style8">
                &nbsp;</td>
            <td class="style18">
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style13">
            </td>
            <td class="style14">
                <asp:Button ID="Button1" runat="server" Text="전 송" />
            </td>
        </tr>
    </table>
    <p>
    </p>
</asp:Content>

