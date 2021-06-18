<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_2.aspx.cs" Inherits="Chapter_8_AASIGMENT_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 600px;
        }
        .auto-style2 {
            height: 26px;
            width:150px;
            text-align:right;
        }
        .auto-style3 {
            width:150px;
            text-align:left;
        }
        .auto-style4 {
            width: 105px;
            text-align: left;
        }
        .auto-style5 {
            width: 105px;
        }
        .auto-style6 {
            font-size: small;
            color: #FF0000;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <table class="auto-style1">
            <tr>
                <td class="auto-style2" rowspan="2"><span style="color: rgb(0, 0, 0); font-family: &quot;Malgun Gothic&quot;; font-size: medium; font-style: normal; font-variant-ligatures: normal; font-variant-caps: normal; font-weight: normal; letter-spacing: normal; orphans: 2; text-align: right; text-indent: 0px; text-transform: none; white-space: normal; widows: 2; word-spacing: 0px; -webkit-text-stroke-width: 0px; background-color: rgb(192, 192, 192); display: inline !important; float: none;">Mileage&nbsp; 입력-&gt;</span></td>
                <td class="auto-style4" rowspan="2">
                    <asp:TextBox ID="TextBox1" runat="server" Height="16px"></asp:TextBox>
                </td>
                <td class="auto-style3">
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ErrorMessage="Meileage를 입력하세요!" ControlToValidate="TextBox1" CssClass="auto-style6"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="auto-style3">
                    <asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox1" CssClass="auto-style6" ErrorMessage="0~90000사이 수!  " MaximumValue="90000" MinimumValue="0"></asp:RangeValidator>
                </td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td class="auto-style5">
        <asp:DropDownList ID="DropDownList1" runat="server">
            <asp:ListItem Value="&gt;=">이상</asp:ListItem>
            <asp:ListItem Value="&lt;=">이하</asp:ListItem>
        </asp:DropDownList>
                </td>
                <td class="auto-style6">&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td class="auto-style5">
        <asp:DropDownList ID="DropDownList2" runat="server">
        </asp:DropDownList>
                </td>
                <td class="auto-style6">&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td class="auto-style5">&nbsp;</td>
                <td class="auto-style6">&nbsp;</td>
            </tr>
            <tr>
                <td>&nbsp;</td>
                <td class="auto-style5">
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="위 조건으로 찾기" />
                </td>
                <td class="auto-style6">&nbsp;</td>
            </tr>
        </table>
    </p>
    <p>
        <asp:Table ID="Table1" runat="server" GridLines="Both">
        </asp:Table>
    </p>
    <p>
    </p>
</asp:Content>

