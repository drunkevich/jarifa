<?php 
require_once("inc/html.inc");

class login_page extends html
{
    public $userid;
    public $password;

    function page()
    {
        $this->header();
        printf('
        <div id="container">
        <form method="post" action="auth.php" name="login">
        <input type="hidden" name="action" value="auth">
        <table  style="text-align: left; margin-left: auto; margin-right: auto; height: 66px; width: 308px;"
         border="0" cellpadding="2" cellspacing="2">
         <tbody>
           <tr>
             <td> %s &nbsp;</td>
             <td><input name="userid"></td>
           </tr>
           <tr>
             <td>%s</td>
             <td><input name="password" type="password"></td>
           </tr>
           <tr>
             <td colspan="2" rowspan="1"></td>
           </tr>
           <tr>
           <td style="width: 117px; text-align: center; vertical-align: middle;"
 colspan="2" rowspan="1">
           <input type="submit"/>
           </td>
           </tr>
         </tbody>
        </table>
        &nbsp;</form>
        </div>
        ',gettext("User"),gettext("Password"));
        $this->footer();
    }

}

class start_page extends html
{
    function page()
    {
        $this->header();
        printf('
                <div id="container">
                <div id="header">
                <h1>'. gettext("Wellcome").' '. $_SESSION['userid'].'</h1> 
                </div>
                <div id="menu">
                <ul id="lista_menu">
                <li><a href="index.php?action=vmt">Torres</a>
                <li><a href="index.php?action=vmm">Monitores</a>
                <li><a href="index.php?action=vmi">Impresoras</a>
                <li><a href="index.php?action=vms">Scanners</a>
                <li><a href="index.php?action=vmp">Portátiles</a>
                <li><a href="index.php?action=vmf">Faxes</a>
                <li><a href="index.php?action=vmo">Otros</a>
                <li><a href="index.php?action=logout">'.gettext("Log Out").'</a>
                </ul>
                </div>
                <div id="contenido">
                <h2>'.gettext("Choose an action from the left panel").'</h2> 
                <p>
                
                </p>
                </div>
            ');
    }
}
?>