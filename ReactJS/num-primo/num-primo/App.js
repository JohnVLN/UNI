import React, { useState } from 'react';
import { StyleSheet, Button, View, TouchableOpacity } from 'react-native';

// You can import supported modules from npm
import { Text, Card, TextInput } from 'react-native-paper';

export default function App() {
  const [text, setText] = useState('');

  function _onPressButton() {
    var numero = parseInt(text);
    var divisor = parseInt(1);
    var contador = parseInt(0);

    if (numero <= 0) {
      texto = 'O Número não pode ser menor ou igual do que 0';
    } else if (numero == 1) {
      texto = 'O Número NÃO é primo!';
    } else {
      for (divisor; divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
          contador++;
        }
      }

      if (contador > 2) {
        texto = 'O Número NÃO é primo!';
      } else if (contador <= 2) {
        texto = 'O Número é primo!';
      }
    }

    alert(texto);
  }
  return (
    <View style={styles.container}>
      <Card>
        <Text style={styles.paragraph}>Verifica se um nº primo</Text>
        <TextInput
          placeholder="Digite um nº inteiro positivo:"
          onChangeText={(text) => setText(text)}
          defaultValue={text}
        />
        <TouchableOpacity
          style={styles.button}
          onPress={_onPressButton}
        >
          <Text style={{color: 'white'}}>Clique aqui!</Text>
        </TouchableOpacity>
      </Card>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    textAlign: 'center',
    alignSelf: 'center',
    marginLeft: 15,
    marginRight: 15,
  },
  paragraph: {
    margin: 24,
    fontSize: 18,
    fontWeight: 'bold',
  },
  button: {
    alignItems: 'center',
    backgroundColor: '#3448A4',
    padding: 10,
    marginTop: 20,
    borderRadius: 5
  },
});
