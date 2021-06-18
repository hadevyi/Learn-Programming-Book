using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Foreach
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int[] iData01;
            iData01 = new int[100];
            label2.Text = "";

            for (int i = 0; i < iData01.Length; i++)
            {
                iData01[i] = i + 1;

            }
            foreach (int ione in iData01)
            {
                label2.Text += ione + " ";

                if (ione % 10 == 0)
                {
                    label2.Text += "\n";
                }
            }
        }
    }
}
