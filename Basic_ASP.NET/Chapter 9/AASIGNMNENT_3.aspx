<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMNENT_3.aspx.cs" Inherits="Chapter_9_AASIGNMNENT_3" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
    </p>
    <p>
        <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" DataSourceID="SqlDataSource1" DataTextField="name" DataValueField="name" OnDataBound="DropDownList1_DataBound" OnSelectedIndexChanged="DropDownList1_SelectedIndexChanged">
        </asp:DropDownList>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:VS2016WED2ConnectionString %>" SelectCommand="SELECT DISTINCT [name] FROM [userdb]"></asp:SqlDataSource>
    </p>
    <p>
        <asp:FormView ID="FormView1" runat="server" DataKeyNames="id" DataSourceID="SqlDataSource2">
            <EditItemTemplate>
                name:
                <asp:TextBox ID="nameTextBox" runat="server" Text='<%# Bind("name") %>' />
                <br />
                id:
                <asp:Label ID="idLabel1" runat="server" Text='<%# Eval("id") %>' />
                <br />
                email:
                <asp:TextBox ID="emailTextBox" runat="server" Text='<%# Bind("email") %>' />
                <br />
                sex:
                <asp:TextBox ID="sexTextBox" runat="server" Text='<%# Bind("sex") %>' />
                <br />
                mileage:
                <asp:TextBox ID="mileageTextBox" runat="server" Text='<%# Bind("mileage") %>' />
                <br />
                level:
                <asp:TextBox ID="levelTextBox" runat="server" Text='<%# Bind("level") %>' />
                <br />
                <asp:LinkButton ID="UpdateButton" runat="server" CausesValidation="True" CommandName="Update" Text="업데이트" />
                &nbsp;<asp:LinkButton ID="UpdateCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="취소" />
            </EditItemTemplate>
            <InsertItemTemplate>
                name:
                <asp:TextBox ID="nameTextBox" runat="server" Text='<%# Bind("name") %>' />
                <br />
                id:
                <asp:TextBox ID="idTextBox" runat="server" Text='<%# Bind("id") %>' />
                <br />
                email:
                <asp:TextBox ID="emailTextBox" runat="server" Text='<%# Bind("email") %>' />
                <br />
                sex:
                <asp:TextBox ID="sexTextBox" runat="server" Text='<%# Bind("sex") %>' />
                <br />
                mileage:
                <asp:TextBox ID="mileageTextBox" runat="server" Text='<%# Bind("mileage") %>' />
                <br />
                level:
                <asp:TextBox ID="levelTextBox" runat="server" Text='<%# Bind("level") %>' />
                <br />
                <asp:LinkButton ID="InsertButton" runat="server" CausesValidation="True" CommandName="Insert" Text="삽입" />
                &nbsp;<asp:LinkButton ID="InsertCancelButton" runat="server" CausesValidation="False" CommandName="Cancel" Text="취소" />
            </InsertItemTemplate>
            <ItemTemplate>
                name:
                <asp:Label ID="nameLabel" runat="server" Text='<%# Bind("name") %>' />
                <br />
                id:
                <asp:Label ID="idLabel" runat="server" Text='<%# Eval("id") %>' />
                <br />
                email:
                <asp:Label ID="emailLabel" runat="server" Text='<%# Bind("email") %>' />
                <br />
                sex:
                <asp:Label ID="sexLabel" runat="server" Text='<%# Bind("sex") %>' />
                <br />
                mileage:
                <asp:Label ID="mileageLabel" runat="server" Text='<%# Bind("mileage") %>' />
                <br />
                level:
                <asp:Label ID="levelLabel" runat="server" Text='<%# Bind("level") %>' />
                <br />
                <asp:LinkButton ID="EditButton" runat="server" CausesValidation="False" CommandName="Edit" Text="편집" />
                &nbsp;&nbsp;
            </ItemTemplate>
        </asp:FormView>
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" ConflictDetection="CompareAllValues" ConnectionString="<%$ ConnectionStrings:VS2016WED2ConnectionString %>" DeleteCommand="DELETE FROM [userdb] WHERE [id] = @original_id AND (([name] = @original_name) OR ([name] IS NULL AND @original_name IS NULL)) AND (([email] = @original_email) OR ([email] IS NULL AND @original_email IS NULL)) AND (([sex] = @original_sex) OR ([sex] IS NULL AND @original_sex IS NULL)) AND (([mileage] = @original_mileage) OR ([mileage] IS NULL AND @original_mileage IS NULL)) AND (([level] = @original_level) OR ([level] IS NULL AND @original_level IS NULL))" InsertCommand="INSERT INTO [userdb] ([name], [id], [email], [sex], [mileage], [level]) VALUES (@name, @id, @email, @sex, @mileage, @level)" OldValuesParameterFormatString="original_{0}" SelectCommand="SELECT [name], [id], [email], [sex], [mileage], [level] FROM [userdb] WHERE ([name] = @name)" UpdateCommand="UPDATE [userdb] SET [name] = @name, [email] = @email, [sex] = @sex, [mileage] = @mileage, [level] = @level WHERE [id] = @original_id AND (([name] = @original_name) OR ([name] IS NULL AND @original_name IS NULL)) AND (([email] = @original_email) OR ([email] IS NULL AND @original_email IS NULL)) AND (([sex] = @original_sex) OR ([sex] IS NULL AND @original_sex IS NULL)) AND (([mileage] = @original_mileage) OR ([mileage] IS NULL AND @original_mileage IS NULL)) AND (([level] = @original_level) OR ([level] IS NULL AND @original_level IS NULL))">
            <DeleteParameters>
                <asp:Parameter Name="original_id" Type="String" />
                <asp:Parameter Name="original_name" Type="String" />
                <asp:Parameter Name="original_email" Type="String" />
                <asp:Parameter Name="original_sex" Type="String" />
                <asp:Parameter Name="original_mileage" Type="Int32" />
                <asp:Parameter Name="original_level" Type="String" />
            </DeleteParameters>
            <InsertParameters>
                <asp:Parameter Name="name" Type="String" />
                <asp:Parameter Name="id" Type="String" />
                <asp:Parameter Name="email" Type="String" />
                <asp:Parameter Name="sex" Type="String" />
                <asp:Parameter Name="mileage" Type="Int32" />
                <asp:Parameter Name="level" Type="String" />
            </InsertParameters>
            <SelectParameters>
                <asp:ControlParameter ControlID="DropDownList1" Name="name" PropertyName="SelectedValue" Type="String" />
            </SelectParameters>
            <UpdateParameters>
                <asp:Parameter Name="name" Type="String" />
                <asp:Parameter Name="email" Type="String" />
                <asp:Parameter Name="sex" Type="String" />
                <asp:Parameter Name="mileage" Type="Int32" />
                <asp:Parameter Name="level" Type="String" />
                <asp:Parameter Name="original_id" Type="String" />
                <asp:Parameter Name="original_name" Type="String" />
                <asp:Parameter Name="original_email" Type="String" />
                <asp:Parameter Name="original_sex" Type="String" />
                <asp:Parameter Name="original_mileage" Type="Int32" />
                <asp:Parameter Name="original_level" Type="String" />
            </UpdateParameters>
        </asp:SqlDataSource>
    </p>
    <p>
    </p>
    <p>
    </p>
</asp:Content>

