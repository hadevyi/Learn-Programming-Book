using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace RandomArray
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int i;
            int count = 0;
            int[] iData01;
            label2.Text = "";
            iData01 = new int[10];
            System.Random rData01 = new System.Random();

            for (i = 0; i < iData01.Length; i++)
            {
                iData01[i] = rData01.Next(1, 101);

                label2.Text += "iarray[" + count + "] = " + iData01[i] + "      ";

                if (count % 2 == 1)
                {
                    label2.Text += "\n";
                }

                count++;
            }
        }
    }
}
