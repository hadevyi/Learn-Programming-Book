<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="UesrDB_write.aspx.cs" Inherits="Chapter_10_UesrDB_write" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 600px;
        }
        .auto-style2 {
            text-align: right;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <table class="auto-style1">
            <tr>
                <td class="auto-style2">name : </td>
                <td>
                    <asp:TextBox ID="TextBox1" runat="server" Enabled="False"></asp:TextBox>
&nbsp;&nbsp;&nbsp; </td>
            </tr>
            <tr>
                <td class="auto-style2">id : </td>
                <td>
                    <asp:TextBox ID="TextBox2" runat="server" Enabled="False"></asp:TextBox>
&nbsp;&nbsp;&nbsp; </td>
            </tr>
            <tr>
                <td class="auto-style2">email : </td>
                <td>
                    <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
&nbsp;
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox3" ErrorMessage="*" style="color: #FF0000"></asp:RequiredFieldValidator>
&nbsp;
                    <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox3" ErrorMessage="email 형식에 맞게!!!" style="color: #FF0000" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*"></asp:RegularExpressionValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style2">&nbsp;sex : </td>
                <td>
                    <asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
&nbsp;
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" ControlToValidate="TextBox4" ErrorMessage="*" style="color: #FF0000"></asp:RequiredFieldValidator>
&nbsp;
                    <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" ControlToValidate="TextBox4" ErrorMessage="대문자 M, F 중 하나만" style="color: #FF0000" ValidationExpression="M|F"></asp:RegularExpressionValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style2">mileage : </td>
                <td>
                    <asp:TextBox ID="TextBox5" runat="server"></asp:TextBox>
&nbsp;
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator3" runat="server" ControlToValidate="TextBox5" ErrorMessage="*" style="color: #FF0000"></asp:RequiredFieldValidator>
&nbsp;
                    <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox5" ErrorMessage="0~9999 사이 숫자" MaximumValue="9999" MinimumValue="0" style="color: #FF0000"></asp:RangeValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style2">level :</td>
                <td>
                    <asp:TextBox ID="TextBox6" runat="server"></asp:TextBox>
&nbsp;
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator4" runat="server" ControlToValidate="TextBox6" ErrorMessage="*" style="color: #FF0000"></asp:RequiredFieldValidator>
&nbsp;
                    <asp:RegularExpressionValidator ID="RegularExpressionValidator3" runat="server" ControlToValidate="TextBox6" ErrorMessage="대문자 A, B, C, D 중 하나만" style="color: #FF0000" ValidationExpression="A|B|C|D"></asp:RegularExpressionValidator>
                </td>
            </tr>
        </table>
    </p>
    <p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="레코드 넣기" />
    </p>
    <p>
    </p>
</asp:Content>

