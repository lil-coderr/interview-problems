
class MyHashSet {
    #num_buckets = 1029;
    #buckets = Array.from({length: this.#num_buckets}, () => []);

    getBucket(key) {
        return key % this.#num_buckets;
    }

    add(key) {
        if (this.contains(key)) {
            return;
        }
        this.#buckets[this.getBucket(key)].push(key);
    }

    remove(key) {
        let bucket = this.#buckets[this.getBucket(key)];
        let index = bucket.indexOf(key);
        if (index !== -1) {
            bucket.splice(index, 1);
        }
    }

    contains(key) {
        let bucket = this.#buckets[this.getBucket(key)];
        return bucket.includes(key);
    }
}
