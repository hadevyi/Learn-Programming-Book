<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_3.aspx.cs" Inherits="Chapter_8_AASIGNMENT_3" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 600px;
        }
        .auto-style2 {
            height: 20px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <table class="auto-style1">
        <tr>
            <td>성별 선택 -&gt;</td>
            <td>
                <asp:DropDownList ID="DropDownList1" runat="server">
                    <asp:ListItem Value="M">M(남자)</asp:ListItem>
                    <asp:ListItem Value="W">W(여자)</asp:ListItem>
                </asp:DropDownList>
            </td>
            <td>
                <asp:DropDownList ID="DropDownList2" runat="server">
                    <asp:ListItem Value="&amp;&amp;">AND</asp:ListItem>
                    <asp:ListItem Value="||">OR</asp:ListItem>
                </asp:DropDownList>
            </td>
            <td>
                <asp:DropDownList ID="DropDownList3" runat="server">
                    <asp:ListItem Value="A">LEVLE A</asp:ListItem>
                    <asp:ListItem Value="B">LEVEL B</asp:ListItem>
                    <asp:ListItem Value="C">LEVEL C</asp:ListItem>
                </asp:DropDownList>
            </td>
            <td><span style="color: rgb(0, 0, 0); font-size: medium; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: normal; letter-spacing: normal; orphans: 2; text-align: start; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(192, 192, 192); display: inline !important; float: none;">&lt;- Level 선택</span></td>
        </tr>
        <tr>
            <td class="auto-style2"></td>
            <td class="auto-style2"></td>
            <td class="auto-style2"></td>
            <td class="auto-style2"></td>
            <td class="auto-style2"></td>
        </tr>
        <tr>
            <td>&nbsp;</td>
            <td colspan="3">
                <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="위 조건으로 userbd에서 검색" />
            </td>
            <td>&nbsp;</td>
        </tr>
    </table>
    <p>
        <asp:Table ID="Table1" runat="server" GridLines="Both">
        </asp:Table>
    </p>
    <p>
    </p>
    <p>
    </p>
</asp:Content>

