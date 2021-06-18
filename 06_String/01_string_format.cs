using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace StringFormat
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int iData01 = 12345;
            double dData01 = 0.05;
            string sData01 = String.Format("{0:C}이고, 재산순위 상위 {1:P1}", iData01, dData01);

            label2.Text = "귀하의 잔액은" + sData01 + "입니다.";
            label3.Text = "귀하의 계좌총액은 " + sData01 + "입니다.";
        }
    }
}
