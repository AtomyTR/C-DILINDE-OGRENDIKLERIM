Programlama da bir kod bloğunu tekrar ve tekrar kolayca çalıştırmak için döngüleri kullanırız. Kullandığımız 3 döngü mevcut ve bunlardan sadece ikisi daha çok kullanılmakta.

- While
- Do While
- For

---

## While

While döngüsünün kullanım örneği aşağıdaki gibidir.

```c
while (expression)
{
// işlem
} 
```

- While döngüsü parantez içerisindeki expression (ifade)’yi değerlendirir.
- Eğer ifade true ise, while döngüsünün içerisindeki (body) işlemler çalıştırılır, ardından while döngüsü ifadeyi tekrar değerlendirir.
- Bu çalışma işlemi ifade false olana kadar çalışır.
- Eğer ifade false olursa, döngü (loop) sonlandırılır.

**Örnek**

```c
// 1'den 5'e kadar sayıları yazdırma.
int i = 1;

while (i <= 5)
{
  printf("%d\n", i);
  ++i;
}
```

---

## Do While

Do While döngüsünün kullanım örneği aşağıdaki gibidir.

```c
do 
{
// işlem
} while (expression); 
```

- While döngüsüyle hemen hemen aynıdır.
- Bu döngünün özelliği, ifade kontrol edilmeden önce her halükarda bir defa çalıştırılmasıdır.
- Bir kez çalıştırıldıktan sonra eğer ifade sağlanıyorsa döngüye devam eder.

**Örnek**

```c
int i = 1;

do
{
	printf("Merhaba dunya.");
} while (i == 1);
```

---

## For

For döngüsünün kullanım örneği aşağıdaki gibidir.

```c
for (initializationStatement; testExpression; updateStatement)
{
// işlem
}
```

- Diğer döngülerden farklıdır.
- Bu döngünün mantığı; bir değer istenilen duruma gelinceye kadar kodun çalıştırılması.
- Bir koşula bağlı olarak, belirli bir sayıda ve bir koşul sağlandığı sürece tekrarlayan döngüdür.

**Örnek**

```c
for (int i = 0; i < 5; i++)
{
	printf("Naber dunya.");
}
```
