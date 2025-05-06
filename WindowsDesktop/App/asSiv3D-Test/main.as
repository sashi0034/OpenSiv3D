void Main() {
    Texture emoji(Emoji("❤️"));

    while (System::Update()) {
        emoji.drawAt(Scene::Center());
    }
}
