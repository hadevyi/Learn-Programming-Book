using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace DISCOUNT
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                int iData01 = int.Parse(textBox1.Text);
                bool bData01 = iData01 <= 15 || iData01 >= 65;
                label3.Text = "할인여부 : " + bData01;

            }
            catch
            {
                label3.Text = "결과에 이상이 있습니다";
            }
        }
    }
}
