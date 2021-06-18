<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Pro 8-2-1.aspx.cs" Inherits="Chapter_8_Pro_8_2_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 700px;
        }
        .auto-style2 {
            height: 23px;
        }
        .auto-style3 {
            font-size: small;
            color: #FF0000;
        }
        .auto-style4 {
            text-align: right;
            font-size: small;
        }
        .auto-style5 {
            height: 23px;
            text-align: right;
            font-size: small;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
    <br />
</p>
<table class="auto-style1">
    <tr>
        <td class="auto-style4">이름</td>
        <td class="auto-style6">
            <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style3" ErrorMessage="이름을 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td class="auto-style3">&nbsp;</td>
    </tr>
    <tr>
        <td class="auto-style4">ID</td>
        <td class="auto-style6">
            <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox2" CssClass="auto-style3" ErrorMessage="ID를 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td>
            <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox2" CssClass="auto-style3" ErrorMessage="영문자와 숫자만 가능(4~10자리) " ValidationExpression="[0-9a-zA-Z]{4,10}"></asp:RegularExpressionValidator>
        </td>
    </tr>
    <tr>
        <td class="auto-style4">EMAIL</td>
        <td class="auto-style6">
            <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="TextBox3" CssClass="auto-style3" ErrorMessage="email을 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td>
            <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="TextBox3" CssClass="auto-style3" ErrorMessage="이메일 형식이 아닙니다!" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
        </td>
    </tr>
    <tr>
        <td class="auto-style4">SEX FOR M OR F</td>
        <td class="auto-style6">
            <asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="TextBox4" CssClass="auto-style3" ErrorMessage="M또는 F를 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td>
            <asp:RegularExpressionValidator ID="RegularExpressionValidator3" runat="server" ControlToValidate="TextBox4" CssClass="auto-style3" ErrorMessage="M또는F를 입력하세요!" ValidationExpression="M|F|m|f"></asp:RegularExpressionValidator>
        </td>
    </tr>
    <tr>
        <td class="auto-style5">MILEAGE(정수입력)</td>
        <td class="auto-style7">
            <asp:TextBox ID="TextBox5" runat="server"></asp:TextBox>
        </td>
        <td class="auto-style2">
            <asp:RequiredFieldValidator ID="RequiredFieldValidator5" runat="server" ControlToValidate="TextBox5" CssClass="auto-style3" ErrorMessage="mileage를 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td class="auto-style2">
            <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox5" CssClass="auto-style3" ErrorMessage="범위는 0~10000 사이 정수" MaximumValue="10000" MinimumValue="1"></asp:RangeValidator>
        </td>
    </tr>
    <tr>
        <td class="auto-style4">LEVEL FOR (A~C)</td>
        <td class="auto-style6">
            <asp:TextBox ID="TextBox6" runat="server"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="RequiredFieldValidator6" runat="server" ControlToValidate="TextBox6" CssClass="auto-style3" ErrorMessage="level을 입력하세요."></asp:RequiredFieldValidator>
        </td>
        <td>
            <asp:RegularExpressionValidator ID="RegularExpressionValidator4" runat="server" ControlToValidate="TextBox6" CssClass="auto-style3" ErrorMessage="대문자 A,B또는C" ValidationExpression="A|B|C"></asp:RegularExpressionValidator>
        </td>
    </tr>
    <tr>
        <td class="auto-style4">&nbsp;</td>
        <td>
            <asp:Button ID="Button1" runat="server" Text="Button" OnClick="Button1_Click" />
        </td>
        <td class="auto-style3">&nbsp;</td>
        <td class="auto-style3">&nbsp;</td>
    </tr>
</table>
<p>
    <asp:Label ID="Label1" runat="server"></asp:Label>
</p>
<p>
</p>
<p>
</p>
</asp:Content>

