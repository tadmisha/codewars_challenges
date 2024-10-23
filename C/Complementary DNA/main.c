char *dna_strand(char *dna) 
{   
    for (int i=0; dna[i]!='\0'; i++) {
        printf("%c", dna[i]);
    }
    char *cdna = (int *)malloc(sizeof(dna));
    for (int i=0; dna[i]!='\0'; i++) {
        switch (dna[i]) {
            case 'A':
                cdna[i] = 'T';
                break;
            case 'T':
                cdna[i] = 'A';
                break;
            case 'G':
                cdna[i] = 'C';
                break;
            case 'C':
                cdna[i] = 'G';
                break;
        }

    }
    return cdna;
}
