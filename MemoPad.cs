using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MemoPadWithEdit
{
    public partial class Form1 : Form
    {
        bool tbcp = false;  // text box change poing 
        bool fse = false;   // file save experience
        string fsN = "";    // file save Name

        public Form1()
        {
            InitializeComponent();
        }

        private void 새로만들기NToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (tbcp == true)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNo);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        fsN = saveFileDialog1.FileName;
                        System.IO.StreamWriter fs = new System.IO.StreamWriter(fsN, false, System.Text.Encoding.Default);
                        fs.WriteLine(textBox1.Text);
                        fs.Close();

                        fse = true;
                        tbcp = false;
                    }

                    textBox1.Text = "";
                    fsN = "";
                    fse = false;
                    tbcp = false;
                }
                else
                {
                    textBox1.Text = "";
                    fsN = "";
                    fse = false;
                    tbcp = false;
                }
            }
            else
            {
                textBox1.Text = "";
                fsN = "";
                fse = false;
                tbcp = false;
            }
        }

        private void 열기OToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (tbcp == true)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNo);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        fsN = saveFileDialog1.FileName;
                        System.IO.StreamWriter fs = new System.IO.StreamWriter(fsN, false, System.Text.Encoding.Default);
                        fs.WriteLine(textBox1.Text);
                        fs.Close();

                        tbcp = false;
                        fse = true;
                    }

                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        System.IO.StreamReader fs = new System.IO.StreamReader(fsN, System.Text.Encoding.Default);
                        textBox1.Text = fs.ReadToEnd();
                        fs.Close();

                        tbcp = false;
                        fse = true;
                    }
                }
                else
                {
                    if (openFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        System.IO.StreamReader fs = new System.IO.StreamReader(fsN, System.Text.Encoding.Default);
                        textBox1.Text = fs.ReadToEnd();
                        fs.Close();

                        tbcp = false;
                        fse = false;
                    }
                }
            }
            else
            {
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    System.IO.StreamReader fs = new System.IO.StreamReader(fsN, System.Text.Encoding.Default);
                    textBox1.Text = fs.ReadToEnd();
                    fs.Close();

                    tbcp = false;
                    fse = false;
                }
            }
        }

        private void 저장SToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (fse == false)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNo);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        fsN = saveFileDialog1.FileName;
                        System.IO.StreamWriter fs = new System.IO.StreamWriter(fsN, false, System.Text.Encoding.Default);
                        fs.WriteLine(textBox1.Text);
                        fs.Close();

                        tbcp = false;
                        fse = true;
                    }
                }
            }
            else
            {
                fsN = saveFileDialog1.FileName;
                System.IO.StreamWriter fs = new System.IO.StreamWriter(fsN, false, System.Text.Encoding.Default);
                fs.WriteLine(textBox1.Text);
                fs.Close();

                tbcp = false;
            }
        }

        private void 끝내기XToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (tbcp == true)
            {
                DialogResult answer = MessageBox.Show("변경사항을 저장하시겠습니까", "저장", MessageBoxButtons.YesNoCancel);

                if (answer == DialogResult.Yes)
                {
                    if (saveFileDialog1.ShowDialog() == DialogResult.OK)
                    {
                        fsN = saveFileDialog1.FileName;
                        System.IO.StreamWriter fs = new System.IO.StreamWriter(fsN, false, System.Text.Encoding.Default);
                        fs.WriteLine(textBox1.Text);
                        fs.Close();
                    }
                }
                else if (answer == DialogResult.Cancel)
                {
                    e.Cancel = true;
                }
            }
        }

        private void 잘라내기TToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Cut();
        }

        private void 복사CToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Copy();
        }

        private void 붙여넣기VToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Paste();
        }

        private void 삭제DToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.Paste("");
        }

        private void 모두선택AToolStripMenuItem_Click(object sender, EventArgs e)
        {
            textBox1.SelectAll();
        }

        private void 글꼴LToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (fontDialog1.ShowDialog() == DialogResult.Cancel)
            {
                textBox1.Font = fontDialog1.Font;
            }
        }

        private void 색깔CToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (colorDialog1.ShowDialog() == DialogResult.Cancel)
            {
                textBox1.ForeColor = colorDialog1.Color;
            }
        }
    }
}
