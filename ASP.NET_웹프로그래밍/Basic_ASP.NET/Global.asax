<%@ Application Language="C#" %>

<script runat="server">

    void Application_Start(object sender, EventArgs e) 
    {
        // 응용 프로그램이 시작될 때 실행되는 코드입니다.
        Application["currentUser"] = 0;
    }
    
    void Application_End(object sender, EventArgs e) 
    {
        //  응용 프로그램이 종료될 때 실행되는 코드입니다.
        Application["currentUser"] = null;
    }
        
    void Application_Error(object sender, EventArgs e) 
    { 
        // 처리되지 않은 오류가 발생할 때 실행되는 코드입니다.

    }

    void Session_Start(object sender, EventArgs e) 
    {
        // 새 세션이 시작할 때 실행되는 코드입니다.
        Application.Lock();
        Application["currentUser"] = int.Parse(Application["currentUser"].ToString()) + 1;
        Application.UnLock();
        Session["begintime"] = DateTime.Now;
    }

    void Session_End(object sender, EventArgs e) 
    {
        // 세션이 끝날 때 실행되는 코드입니다. 
        // 참고: Session_End 이벤트는 Web.config 파일에서 sessionstate 모드가
        // InProc로 설정되어 있는 경우에만 발생합니다. 세션 모드가 StateServer 또는 SQLServer로 
        // 설정되어 있는 경우에는 이 이벤트가 발생하지 않습니다.
        Application.Lock();
        Application["currentUser"] = int.Parse(Application["currentUser"].ToString()) - 1;
        Application.UnLock();
    }
       
</script>
