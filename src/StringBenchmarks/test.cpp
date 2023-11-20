#include <benchmark/benchmark.h>
#include "bp_file/bufferpool.hpp"
#include <iostream>

// #define USE_PFILE 1

// // Konstanten definieren
// constexpr std::size_t BUFFER_SIZE = 100; // Größe des Bufferpools
// constexpr uint8_t TEST_FILE_ID = 1;      // File-ID für den Test

// // Funktion, um eine Paged-File-Instanz zu erstellen und zu füllen
// paged_file_ptr createAndFillTestFile(std::size_t numPages) {
//     auto pf = std::make_shared<paged_file>();
//     // Angenommen, die Datei existiert und ist geöffnet
//     for (std::size_t i = 0; i < numPages; ++i) {
//         auto pid = pf->allocate_page();
//         // Füllen der Seite mit Daten (optional)
//     }
//     return pf;
// }

// // Benchmark für Page-Hits
// static void BM_PageHit(benchmark::State& state) {
//     bufferpool pool(BUFFER_SIZE);
//     auto testFile = createAndFillTestFile(50); // Erstellen eines Test-Files mit 50 Seiten
//     pool.register_file(TEST_FILE_ID, testFile);

//     // Simulieren eines Page-Hits
//     for (auto _ : state) {
//         auto page = pool.fetch_page((1 << 60) | 1); // Holt Seite 1 aus dem Test-File
//         benchmark::DoNotOptimize(page); // Verhindert, dass der Compiler den Code optimiert
//     }
// }
// BENCHMARK(BM_PageHit);

// // Benchmark für Page-Misses
// static void BM_PageMiss(benchmark::State& state) {
//     bufferpool pool(BUFFER_SIZE);
//     auto testFile = createAndFillTestFile(200); // Erstellen eines größeren Test-Files
//     pool.register_file(TEST_FILE_ID, testFile);

//     // Simulieren eines Page-Misses
//     for (auto _ : state) {
//         auto page = pool.fetch_page((1 << 60) | 101); // Holt eine nicht im Cache befindliche Seite
//         benchmark::DoNotOptimize(page);
//     }
// }
// BENCHMARK(BM_PageMiss);

// BENCHMARK_MAIN();
int main() {
    // Einfache Ausgabe
    std::cout << "Hallo, Welt!" << std::endl;

    return 0;
}