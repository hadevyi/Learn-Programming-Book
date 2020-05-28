<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_4.aspx.cs" Inherits="Chapter_8_AASIGNMENT_4" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            width: 300px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <asp:Table ID="Table1" runat="server" GridLines="Both">
        </asp:Table>
    </p>
    <table class="auto-style1">
        <tr>
            <td style="text-align: right">표시할 레코드 표시-&gt;</td>
            <td>
                <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged">
                </asp:DropDownList>
            </td>
        </tr>
    </table>
    <p>
    </p>
</asp:Content>

