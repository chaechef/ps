function submit () {
    let arr = [];
    for(let i=1; i<5; i++){
        let input = document.getElementById(`n${i}`)
        if(input.checked){
            arr.push(input.value)
        }
    }
	fetch('/submit', {
		method: 'POST',
		headers: {'Content-Type': 'application/json'},
		body: JSON.stringify({"answer": arr})
	})
		.then(res => res.json())
		.then(ret => {
			// Update Element
		});
	
};
