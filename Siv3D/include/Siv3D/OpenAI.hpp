﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2025 Ryo Suzuki
//	Copyright (c) 2016-2025 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once

# include "OpenAI/Chat.hpp"
//	OpenAI::Chat::Complete() - ChatGPT にメッセージを送信し、返答メッセージを取得します。
//	OpenAI::Chat::CompleteAsync() - ChatGPTに メッセージを送信し、レスポンス（JSON）を取得する非同期タスクを返します。
//	OpenAI::Chat::GetContent() - ChatGPT のレスポンス（JSON）から、返答メッセージを抽出して返します。
// 
//	OpenAI::Chat::Complete() - Sends a message to ChatGPT and retrieves the response message.
//	OpenAI::Chat::CompleteAsync() - Returns an asynchronous task that sends a message to ChatGPT and retrieves the response (JSON).
//	OpenAI::Chat::GetContent() - Extracts the response message from the response (JSON) of ChatGPT and returns it.

# include "OpenAI/Vision.hpp"
//	OpenAI::Vision::Complete() - ChatGPT with vision にメッセージを送信し、返答メッセージを取得します。
//	OpenAI::Vision::CompleteAsync() - ChatGPT with vision にメッセージを送信し、レスポンス（JSON）を取得する非同期タスクを返します。
//	OpenAI::Vision::GetContent() - ChatGPT with vision のレスポンス（JSON）から、返答メッセージを抽出して返します。
//
//	OpenAI::Vision::Complete() - Sends a message to ChatGPT with vision and retrieves the response message.
//	OpenAI::Vision::CompleteAsync() - Returns an asynchronous task that sends a message to ChatGPT with vision and retrieves the response (JSON).
//	OpenAI::Vision::GetContent() - Extracts the response message from the response (JSON) of ChatGPT with vision and returns it.

# include "OpenAI/Image.hpp"
//	OpenAI::Image::Create() - プロンプトに基づいて DALL-E モデルを使用して生成された画像を取得します。
//	OpenAI::Image::CreateAsync() - プロンプトに基づいて DALL-E モデルを使用して画像を生成する非同期タスクを返します。
//
//	OpenAI::Image::Create() - Get one or more images generated by the DALL-E model based on the given prompt.
//	OpenAI::Image::CreateAsync() - Returns an asynchronous task that generates one or more images using the DALL-E model based on the given prompt.

# include "OpenAI/Embedding.hpp"
//	OpenAI::Embedding::Create() - 文章の埋め込みベクトルを取得します。
//	OpenAI::Embedding::CreateAsync() - 文章の埋め込みベクトルを取得する非同期タスクを返します。
//	OpenAI::Embedding::GetVector() - Embedding モデルのレスポンス（JSON）から、埋め込みベクトルを抽出して返します。
//	OpenAI::Embedding::CosineSimilarity() - 2 つの埋め込みベクトルのコサイン類似度を計算して返します。
//
//	OpenAI::Embedding::Create() - Retrieves the embedding vector for a given sentence.
//	OpenAI::Embedding::CreateAsync() - Returns an asynchronous task that retrieves the embedding vector for a given sentence.
//	OpenAI::Embedding::GetVector() - Extracts and returns the embedding vector from the Embedding model response (JSON).
//	OpenAI::Embedding::CosineSimilarity() - Calculates and returns the cosine similarity between two embedding vectors.

# include "OpenAI/Speech.hpp"
//	OpenAI::Speech::Create() - テキストに基づいて音声を合成します。
//	OpenAI::Speech::CreateAsync() - テキストに基づいて音声を合成する非同期タスクを返します。
//
//	OpenAI::Speech::Create() - Synthesizes speech based on the given text.
//	OpenAI::Speech::CreateAsync() - Returns an asynchronous task that synthesizes speech based on the given text.
