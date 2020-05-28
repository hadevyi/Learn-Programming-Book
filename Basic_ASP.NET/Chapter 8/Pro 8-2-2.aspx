<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="Pro 8-2-2.aspx.cs" Inherits="Chapter_8_Pro_8_2_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 500px;
        }
        .auto-style2 {
            font-size: small;
            color: #FF0000;
        }
        .auto-style3 {
            width: 195px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <table class="auto-style1">
        <tr>
            <td style="text-align: right">ID를 넣어서 찾기 -&gt;</td>
            <td class="auto-style3">
                <asp:TextBox ID="TextBox1" runat="server">hnlee</asp:TextBox>
            </td>
            <td>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style2" ErrorMessage="*"></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td>&nbsp;</td>
            <td class="auto-style3">
                <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="userdb에서 검색" />
            </td>
            <td class="auto-style2">&nbsp;</td>
        </tr>
    </table>
    <p>
        <asp:Table ID="Table1" runat="server" GridLines="Both">
        </asp:Table>
    </p>
    <p>
    </p>
</asp:Content>

