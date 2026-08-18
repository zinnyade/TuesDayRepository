#pragma once

//定数
const int DAMAGE_POINT = 20;
const int HEAL_POINT = 30;



//関数

/// <summary>
/// 回復関数
/// </summary>
/// <param name="hp">プレイヤーのHP</param>
void Heal(int* hp);

/// <summary>
/// ダメージ関数
/// </summary>
/// <param name="hp">プレイヤーのHP</param>
void Damage(int* hp);