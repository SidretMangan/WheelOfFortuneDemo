using System;
using UnityEngine;
using Cysharp.Threading.Tasks;

namespace FortuneWheel
{
    public class RewardWheelManager : BaseSingleton<RewardWheelManager>
    {
        [Header("Connections")]

        #region GameManage
        [HideInInspector] public GameState State;
        public static event Action<GameState> OnGameStateChanged;
        #endregion
        private void Start()
        {
            //TODO first game state
        }
        public void UpdateGameState(GameState newState)
        {
            State = newState;
            //TODO after state set, switch(newState) here
            switch (newState)
            {
                case GameState.StartWheelGame:
                    break;
                case GameState.WheelSpin:
                    break;
                case GameState.EndFortuneWheelGame:
                    break;
            }

            OnGameStateChanged?.Invoke(newState);
        }

        async UniTaskVoid HandleStartWheelGame()
        {
            //TODO load playerprefs or SO or JSONUtility values to start from 
        }
        async UniTaskVoid HandleWheelSpin()
        {
            //TODO when application on pause invoke this one
        }
        async UniTaskVoid HandleEndFortuneWheel()
        {
            //TODO save collected from spins or kill if death boom came
        }
        public enum GameState
        {
            StartWheelGame,
            WheelSpin,
            EndFortuneWheelGame
        }

    }
  


}
