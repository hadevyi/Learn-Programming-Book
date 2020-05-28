<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 6-1-2.aspx.cs" Inherits="Chapter_6_pro_6_1_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .auto-style1 {
            text-align: center;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <div style="height: 240px; width: 179px; background-color: #FF99FF; z-index: 1; left: 304px; top: 133px; position: absolute;" class="auto-style1">
        <br />
        MENU<br />
        <br />
        <asp:ListBox ID="ListBox1" runat="server" Height="170px" Width="132px" AutoPostBack="True" OnSelectedIndexChanged="ListBox1_SelectedIndexChanged"></asp:ListBox>
    </div>
    <div style="height: 240px; width: 179px; background-color: #FFFF99; z-index: 1; left: 508px; top: 134px; position: absolute;" class="auto-style1">
        <br />
        ORDER<br />
        <br />
        <asp:ListBox ID="ListBox2" runat="server" Height="164px" Width="132px"></asp:ListBox>
    </div>
    <div style="height: 240px; width: 179px; background-color: #9999FF; z-index: 1; left: 711px; top: 134px; position: absolute;" class="auto-style1">
        <br />
        PRICE<br />
        <br />
        <asp:ListBox ID="ListBox3" runat="server" Height="164px" Width="129px"></asp:ListBox>
    </div>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
    </p>
    <p>
        &nbsp;</p>
    <p>
        <asp:Label ID="Label1" runat="server" style="z-index: 1; left: 453px; top: 402px; position: absolute" ForeColor="Red"></asp:Label>
        <asp:Label ID="Label2" runat="server" style="z-index: 1; left: 454px; top: 441px; position: absolute"></asp:Label>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click1" style="z-index: 1; left: 336px; top: 402px; position: absolute" Text="주문취소" />
    </p>
    <p>
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" style="z-index: 1; left: 337px; top: 444px; position: absolute; width: 75px" Text="Clear" />
    </p>
    <p>
        &nbsp;</p>
    <p>
        <asp:Label ID="Label3" runat="server" style="z-index: 1; left: 455px; top: 481px; position: absolute"></asp:Label>
    </p>
    <p>
        &nbsp;</p>
    <p>
    </p>
</asp:Content>

