class Document {
  constructor(title, subtitle, publishedAt){
    this.title = title;
    this.subtitle = subtitle;
    this.publishedAt = publishedAt;
  }
}
debugger
class Book extends Document {
  constructor(title, subtitle, publishedAt, isbn, edition, volume){
    super(title, subtitle, publishedAt);
    this.isbn = isbn;
    this.edition = edition;
    this.volume = volume;
  }
}

class Periodical extends Document {
  constructor(title, subtitle, publishedAt, issn, volume, issue){
    super(title, subtitle, publishedAt);
    this.isbn = issn;
    this.volume = volume;
    this.issue = issue;
  }
}