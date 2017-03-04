/*
 *	Nama File 	:	DataJadwalSholat.h
 *	Deskripsi	: 	Library untuk menerjemahkan data bit jadwal sholat dari eeprom menjadi format waktu
 */

#ifndef _DATAJADWALSHOLAT_h
#define _DATAJADWALSHOLAT_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#define JANUARI 1
#define FEBRUARI 2
#define MARET 3
#define APRIL 4
#define MEI 5
#define JUNI 6
#define JULI 7
#define AGUSTUS 8
#define SEPTEMBER 9
#define OKTOBER 10
#define NOVEMBER 11
#define DESEMBER 12

class DataJadwalSholat
{
 public:
	 uint8_t jamImsyak(uint8_t tanggal, uint8_t bulan);
	 uint8_t jamSubuh(uint8_t tanggal, uint8_t bulan);
	 uint8_t jamDzuhur(uint8_t tanggal, uint8_t bulan);
	 uint8_t jamAsar(uint8_t tanggal, uint8_t bulan);
	 uint8_t jamMaghrib(uint8_t tanggal, uint8_t bulan);
	 uint8_t jamIsya(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitImsyak(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitSubuh(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitDzuhur(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitAsar(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitMaghrib(uint8_t tanggal, uint8_t bulan);
	 uint8_t menitIsya(uint8_t tanggal, uint8_t bulan);
	 
	 /*const byte januari[31][6] = {
		 { 0x31,	0x3B,	0x2A,	0x89,	0x3B,	0x8F },
		 { 0x32,	0x80,	0x2A,	0x89,	0x3B,	0x90 },
		 { 0x32,	0x80,	0x2B,	0x89,	0x3B,	0x90 },
		 { 0x33,	0x81,	0x2B,	0x8A,	0x80,	0x90 },
		 { 0x33,	0x81,	0x2C,	0x8A,	0x80,	0x91 },
		 { 0x34,	0x82,	0x2C,	0x8A,	0x81,	0x91 },
		 { 0x35,	0x83,	0x2C,	0x8B,	0x81,	0x91 },
		 { 0x35,	0x83,	0x2D,	0x8B,	0x81,	0x91 },
		 { 0x36,	0x84,	0x2D,	0x8B,	0x82,	0x92 },
		 { 0x36,	0x84,	0x2E,	0x8C,	0x82,	0x92 },
		 { 0x37,	0x85,	0x2E,	0x8C,	0x82,	0x92 },
		 { 0x38,	0x86,	0x2F,	0x8C,	0x83,	0x92 },
		 { 0x38,	0x86,	0x2F,	0x8C,	0x83,	0x93 },
		 { 0x39,	0x87,	0x2F,	0x8C,	0x83,	0x93 },
		 { 0x39,	0x87,	0x30,	0x8D,	0x83,	0x93 },
		 { 0x3A,	0x88,	0x30,	0x8D,	0x84,	0x93 },
		 { 0x3B,	0x89,	0x30,	0x8D,	0x84,	0x93 },
		 { 0x3B,	0x89,	0x31,	0x8D,	0x84,	0x93 },
		 { 0x80,	0x8A,	0x31,	0x8D,	0x84,	0x93 },
		 { 0x80,	0x8A,	0x31,	0x8D,	0x84,	0x93 },
		 { 0x81,	0x8B,	0x32,	0x8D,	0x85,	0x93 },
		 { 0x82,	0x8C,	0x32,	0x8D,	0x85,	0x93 },
		 { 0x82,	0x8C,	0x32,	0x8D,	0x85,	0x93 },
		 { 0x83,	0x8D,	0x32,	0x8D,	0x85,	0x93 },
		 { 0x83,	0x8D,	0x33,	0x8D,	0x85,	0x93 },
		 { 0x84,	0x8E,	0x33,	0x8D,	0x85,	0x93 },
		 { 0x84,	0x8E,	0x33,	0x8D,	0x85,	0x93 },
		 { 0x85,	0x8F,	0x33,	0x8C,	0x85,	0x93 },
		 { 0x85,	0x8F,	0x34,	0x8C,	0x85,	0x93 },
		 { 0x86,	0x90,	0x34,	0x8C,	0x85,	0x93 },
		 { 0x86,	0x90,	0x34,	0x8C,	0x85,	0x93 }
	 };*/
	 
	 /*const byte februari[31][6] = {
		 { 0x87,	0x91,	0x34,	0x8C,	0x85,	0x93 },
		 { 0x87,	0x91,	0x34,	0x8B,	0x85,	0x92 },
		 { 0x88,	0x92,	0x34,	0x8B,	0x85,	0x92 },
		 { 0x88,	0x92,	0x34,	0x8B,	0x85,	0x92 },
		 { 0x88,	0x92,	0x35,	0x8A,	0x85,	0x92 },
		 { 0x89,	0x93,	0x35,	0x8A,	0x85,	0x92 },
		 { 0x89,	0x93,	0x35,	0x8A,	0x85,	0x91 },
		 { 0x8A,	0x94,	0x35,	0x89,	0x85,	0x91 },
		 { 0x8A,	0x94,	0x35,	0x89,	0x85,	0x91 },
		 { 0x8A,	0x94,	0x35,	0x88,	0x84,	0x91 },
		 { 0x8B,	0x95,	0x35,	0x88,	0x84,	0x90 },
		 { 0x8B,	0x95,	0x35,	0x87,	0x84,	0x90 },
		 { 0x8B,	0x95,	0x35,	0x86,	0x84,	0x90 },
		 { 0x8C,	0x96,	0x35,	0x86,	0x84,	0x8F },
		 { 0x8C,	0x96,	0x35,	0x85,	0x83,	0x8F },
		 { 0x8C,	0x96,	0x35,	0x85,	0x83,	0x8F },
		 { 0x8D,	0x97,	0x35,	0x84,	0x83,	0x8E },
		 { 0x8D,	0x97,	0x35,	0x83,	0x83,	0x8E },
		 { 0x8D,	0x97,	0x35,	0x82,	0x82,	0x8D },
		 { 0x8D,	0x97,	0x35,	0x82,	0x82,	0x8D },
		 { 0x8E,	0x98,	0x34,	0x81,	0x82,	0x8D },
		 { 0x8E,	0x98,	0x34,	0x80,	0x81,	0x8C },
		 { 0x8E,	0x98,	0x34,	0x3B,	0x81,	0x8C },
		 { 0x8E,	0x98,	0x34,	0x3A,	0x81,	0x8B },
		 { 0x8E,	0x98,	0x34,	0x39,	0x80,	0x8B },
		 { 0x8F,	0x99,	0x34,	0x39,	0x80,	0x8A },
		 { 0x8F,	0x99,	0x34,	0x38,	0x80,	0x8A },
		 { 0x8F,	0x99,	0x33,	0x37,	0x3B,	0x8A },
		 { 0x8F,	0x99,	0x33,	0x36,	0x3B,	0x89 },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 }
	 };*/
	 
	 /*const byte maret[31][6] = {
		 { 0x8F,	0x99,	0x33,	0x35,	0x3A,	0x89 },
		 { 0x8F,	0x99,	0x33,	0x35,	0x3A,	0x88 },
		 { 0x8F,	0x99,	0x33,	0x36,	0x3A,	0x88 },
		 { 0x8F,	0x99,	0x32,	0x36,	0x39,	0x87 },
		 { 0x8F,	0x99,	0x32,	0x37,	0x39,	0x87 },
		 { 0x90,	0x9A,	0x32,	0x37,	0x38,	0x86 },
		 { 0x90,	0x9A,	0x32,	0x37,	0x38,	0x86 },
		 { 0x90,	0x9A,	0x32,	0x38,	0x37,	0x85 },
		 { 0x90,	0x9A,	0x31,	0x38,	0x37,	0x85 },
		 { 0x90,	0x9A,	0x31,	0x38,	0x36,	0x84 },
		 { 0x90,	0x9A,	0x31,	0x39,	0x36,	0x84 },
		 { 0x90,	0x9A,	0x30,	0x39,	0x36,	0x83 },
		 { 0x90,	0x9A,	0x30,	0x39,	0x35,	0x82 },
		 { 0x90,	0x9A,	0x30,	0x3A,	0x35,	0x82 },
		 { 0x90,	0x9A,	0x30,	0x3A,	0x34,	0x81 },
		 { 0x90,	0x9A,	0x2F,	0x3A,	0x34,	0x81 },
		 { 0x90,	0x9A,	0x2F,	0x3A,	0x33,	0x80 },
		 { 0x90,	0x9A,	0x2F,	0x3A,	0x33,	0x80 },
		 { 0x8F,	0x99,	0x2F,	0x3A,	0x32,	0x3B },
		 { 0x8F,	0x99,	0x2E,	0x3B,	0x32,	0x3B },
		 { 0x8F,	0x99,	0x2E,	0x3B,	0x31,	0x3A },
		 { 0x8F,	0x99,	0x2E,	0x3B,	0x31,	0x3A },
		 { 0x8F,	0x99,	0x2D,	0x3B,	0x30,	0x39 },
		 { 0x8F,	0x99,	0x2D,	0x3B,	0x2F,	0x39 },
		 { 0x8F,	0x99,	0x2D,	0x3B,	0x2F,	0x38 },
		 { 0x8F,	0x99,	0x2C,	0x3B,	0x2E,	0x38 },
		 { 0x8F,	0x99,	0x2C,	0x3B,	0x2E,	0x37 },
		 { 0x8F,	0x99,	0x2C,	0x3B,	0x2D,	0x37 },
		 { 0x8F,	0x99,	0x2C,	0x3B,	0x2D,	0x36 },
		 { 0x8E,	0x98,	0x2B,	0x3B,	0x2C,	0x36 },
		 { 0x8E,	0x98,	0x2B,	0x3B,	0x2C,	0x35 }
	 };*/
	 
	 /*const byte april[31][6] = {
		 { 0x8E,	0x98,	0x2B,	0x3B,	0x2B,	0x35 },
		 { 0x8E,	0x98,	0x2A,	0x3B,	0x2B,	0x34 },
		 { 0x8E,	0x98,	0x2A,	0x3B,	0x2A,	0x34 },
		 { 0x8E,	0x98,	0x2A,	0x3B,	0x2A,	0x33 },
		 { 0x8E,	0x98,	0x29,	0x3B,	0x29,	0x33 },
		 { 0x8E,	0x98,	0x29,	0x3B,	0x29,	0x33 },
		 { 0x8E,	0x98,	0x29,	0x3B,	0x28,	0x32 },
		 { 0x8D,	0x97,	0x29,	0x3B,	0x28,	0x32 },
		 { 0x8D,	0x97,	0x28,	0x3B,	0x27,	0x31 },
		 { 0x8D,	0x97,	0x28,	0x3B,	0x27,	0x31 },
		 { 0x8D,	0x97,	0x28,	0x3B,	0x27,	0x30 },
		 { 0x8D,	0x97,	0x28,	0x3B,	0x26,	0x30 },
		 { 0x8D,	0x97,	0x27,	0x3B,	0x26,	0x30 },
		 { 0x8D,	0x97,	0x27,	0x3B,	0x25,	0x2F },
		 { 0x8C,	0x96,	0x27,	0x3B,	0x25,	0x2F },
		 { 0x8C,	0x96,	0x27,	0x3A,	0x24,	0x2F },
		 { 0x8C,	0x96,	0x26,	0x3A,	0x24,	0x2E },
		 { 0x8C,	0x96,	0x26,	0x3A,	0x24,	0x2E },
		 { 0x8C,	0x96,	0x26,	0x3A,	0x23,	0x2D },
		 { 0x8C,	0x96,	0x26,	0x3A,	0x23,	0x2D },
		 { 0x8C,	0x96,	0x25,	0x3A,	0x22,	0x2D },
		 { 0x8C,	0x96,	0x25,	0x3A,	0x22,	0x2D },
		 { 0x8C,	0x96,	0x25,	0x3A,	0x22,	0x2C },
		 { 0x8B,	0x95,	0x25,	0x3A,	0x21,	0x2C },
		 { 0x8B,	0x95,	0x25,	0x3A,	0x21,	0x2C },
		 { 0x8B,	0x95,	0x25,	0x3A,	0x20,	0x2B },
		 { 0x8B,	0x95,	0x24,	0x39,	0x20,	0x2B },
		 { 0x8B,	0x95,	0x24,	0x39,	0x20,	0x2B },
		 { 0x8B,	0x95,	0x24,	0x39,	0x20,	0x2B },
		 { 0x8B,	0x95,	0x24,	0x39,	0x1F,	0x2B },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 }
	 };*/
	
	 /*const byte mei[31][6] = {
		 { 0x8B,	0x95,	0x24,	0x39,	0x1F,	0x2A },
		 { 0x8B,	0x95,	0x24,	0x39,	0x1F,	0x2A },
		 { 0x8B,	0x95,	0x24,	0x39,	0x1E,	0x2A },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1E,	0x2A },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1E,	0x2A },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1E,	0x2A },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1D,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1D,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1D,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1D,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1D,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1C,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1B,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1B,	0x29 },
		 { 0x8B,	0x95,	0x23,	0x39,	0x1B,	0x29 },
		 { 0x8B,	0x95,	0x24,	0x39,	0x1B,	0x29 },
		 { 0x8B,	0x95,	0x24,	0x39,	0x1B,	0x29 },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1B,	0x29 },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1B,	0x29 },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1B,	0x2A },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1B,	0x2A },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1C,	0x2A },
		 { 0x8C,	0x96,	0x24,	0x39,	0x1C,	0x2A }
	 };*/

	 /*const byte juni[31][6] = {
		 { 0x8C,	0x96,	0x24,	0x3A,	0x1C,	0x2A },
		 { 0x8C,	0x96,	0x25,	0x3A,	0x1C,	0x2A },
		 { 0x8D,	0x97,	0x25,	0x3A,	0x1C,	0x2A },
		 { 0x8D,	0x97,	0x25,	0x3A,	0x1C,	0x2A },
		 { 0x8D,	0x97,	0x25,	0x3A,	0x1C,	0x2B },
		 { 0x8D,	0x97,	0x25,	0x3A,	0x1C,	0x2B },
		 { 0x8D,	0x97,	0x26,	0x3A,	0x1C,	0x2B },
		 { 0x8E,	0x98,	0x26,	0x3B,	0x1C,	0x2B },
		 { 0x8E,	0x98,	0x26,	0x3B,	0x1D,	0x2B },
		 { 0x8E,	0x98,	0x26,	0x3B,	0x1D,	0x2C },
		 { 0x8E,	0x98,	0x26,	0x3B,	0x1D,	0x2C },
		 { 0x8E,	0x98,	0x27,	0x3B,	0x1D,	0x2C },
		 { 0x8F,	0x99,	0x27,	0x80,	0x1D,	0x2C },
		 { 0x8F,	0x99,	0x27,	0x80,	0x1D,	0x2C },
		 { 0x8F,	0x99,	0x27,	0x80,	0x1E,	0x2D },
		 { 0x8F,	0x99,	0x27,	0x80,	0x1E,	0x2D },
		 { 0x8F,	0x99,	0x28,	0x80,	0x1E,	0x2D },
		 { 0x90,	0x9A,	0x28,	0x81,	0x1E,	0x2D },
		 { 0x90,	0x9A,	0x28,	0x81,	0x1E,	0x2D },
		 { 0x90,	0x9A,	0x28,	0x81,	0x1F,	0x2E },
		 { 0x90,	0x9A,	0x28,	0x81,	0x1F,	0x2E },
		 { 0x90,	0x9A,	0x29,	0x81,	0x1F,	0x2E },
		 { 0x91,	0x9B,	0x29,	0x82,	0x1F,	0x2E },
		 { 0x91,	0x9B,	0x29,	0x82,	0x1F,	0x2F },
		 { 0x91,	0x9B,	0x29,	0x82,	0x20,	0x2F },
		 { 0x91,	0x9B,	0x2A,	0x82,	0x20,	0x2F },
		 { 0x92,	0x9C,	0x2A,	0x83,	0x20,	0x2F },
		 { 0x92,	0x9C,	0x2A,	0x83,	0x20,	0x2F },
		 { 0x92,	0x9C,	0x2A,	0x83,	0x21,	0x30 },
		 { 0x92,	0x9C,	0x2A,	0x83,	0x21,	0x30 },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 }
	 };*/

	 /*const byte juli[31][6] = {
		 { 0x92,	0x9C,	0x2B,	0x83,	0x21,	0x30 },
		 { 0x93,	0x9D,	0x2B,	0x84,	0x21,	0x30 },
		 { 0x93,	0x9D,	0x2B,	0x84,	0x22,	0x30 },
		 { 0x93,	0x9D,	0x2B,	0x84,	0x22,	0x31 },
		 { 0x93,	0x9D,	0x2B,	0x84,	0x22,	0x31 },
		 { 0x93,	0x9D,	0x2B,	0x84,	0x22,	0x31 },
		 { 0x93,	0x9D,	0x2C,	0x85,	0x22,	0x31 },
		 { 0x94,	0x9E,	0x2C,	0x85,	0x23,	0x31 },
		 { 0x94,	0x9E,	0x2C,	0x85,	0x23,	0x31 },
		 { 0x94,	0x9E,	0x2C,	0x85,	0x23,	0x32 },
		 { 0x94,	0x9E,	0x2C,	0x85,	0x23,	0x32 },
		 { 0x94,	0x9E,	0x2C,	0x85,	0x24,	0x32 },
		 { 0x94,	0x9E,	0x2C,	0x86,	0x24,	0x32 },
		 { 0x94,	0x9E,	0x2D,	0x86,	0x24,	0x32 },
		 { 0x94,	0x9E,	0x2D,	0x86,	0x24,	0x32 },
		 { 0x95,	0x9F,	0x2D,	0x86,	0x24,	0x32 },
		 { 0x95,	0x9F,	0x2D,	0x86,	0x25,	0x32 },
		 { 0x95,	0x9F,	0x2D,	0x86,	0x25,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x86,	0x25,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x86,	0x25,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x25,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x25,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x26,	0x33 }
	 };*/

	 /*const byte agustus[31][6] = {
		 { 0x95,	0x9F,	0x2D,	0x87,	0x27,	0x33 },
		 { 0x95,	0x9F,	0x2D,	0x87,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2D,	0x87,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2D,	0x86,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2D,	0x86,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2D,	0x86,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2C,	0x86,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2C,	0x86,	0x27,	0x33 },
		 { 0x94,	0x9E,	0x2C,	0x86,	0x27,	0x33 },
		 { 0x93,	0x9D,	0x2C,	0x86,	0x27,	0x33 },
		 { 0x93,	0x9D,	0x2C,	0x85,	0x27,	0x33 },
		 { 0x93,	0x9D,	0x2C,	0x85,	0x27,	0x32 },
		 { 0x93,	0x9D,	0x2C,	0x85,	0x27,	0x32 },
		 { 0x92,	0x9C,	0x2B,	0x85,	0x27,	0x32 },
		 { 0x92,	0x9C,	0x2B,	0x84,	0x27,	0x32 },
		 { 0x92,	0x9C,	0x2B,	0x84,	0x27,	0x32 },
		 { 0x92,	0x9C,	0x2B,	0x84,	0x27,	0x32 },
		 { 0x91,	0x9B,	0x2B,	0x84,	0x27,	0x32 },
		 { 0x91,	0x9B,	0x2A,	0x83,	0x27,	0x32 },
		 { 0x91,	0x9B,	0x2A,	0x83,	0x27,	0x31 },
		 { 0x90,	0x9A,	0x2A,	0x83,	0x27,	0x31 },
		 { 0x90,	0x9A,	0x2A,	0x82,	0x27,	0x31 },
		 { 0x90,	0x9A,	0x29,	0x82,	0x27,	0x31 },
		 { 0x8F,	0x99,	0x29,	0x82,	0x26,	0x31 },
		 { 0x8F,	0x99,	0x29,	0x81,	0x26,	0x31 },
		 { 0x8F,	0x99,	0x29,	0x81,	0x26,	0x31 },
		 { 0x8E,	0x98,	0x28,	0x80,	0x26,	0x30 },
		 { 0x8E,	0x98,	0x28,	0x80,	0x26,	0x30 },
		 { 0x8D,	0x97,	0x28,	0x3B,	0x26,	0x30 },
		 { 0x8D,	0x97,	0x27,	0x3B,	0x26,	0x30 },
		 { 0x8C,	0x96,	0x27,	0x3A,	0x26,	0x30 }
	 };*/

	 /*const byte september[31][6] = {
		 { 0x8C,	0x96,	0x27,	0x3A,	0x26,	0x2F },
		 { 0x8C,	0x96,	0x26,	0x39,	0x26,	0x2F },
		 { 0x8B,	0x95,	0x26,	0x39,	0x25,	0x2F },
		 { 0x8B,	0x95,	0x26,	0x38,	0x25,	0x2F },
		 { 0x8A,	0x94,	0x25,	0x38,	0x25,	0x2F },
		 { 0x8A,	0x94,	0x25,	0x37,	0x25,	0x2F },
		 { 0x89,	0x93,	0x25,	0x37,	0x25,	0x2E },
		 { 0x89,	0x93,	0x24,	0x36,	0x25,	0x2E },
		 { 0x88,	0x92,	0x24,	0x35,	0x25,	0x2E },
		 { 0x88,	0x92,	0x24,	0x35,	0x24,	0x2E },
		 { 0x87,	0x91,	0x23,	0x34,	0x24,	0x2E },
		 { 0x87,	0x91,	0x23,	0x34,	0x24,	0x2E },
		 { 0x86,	0x90,	0x23,	0x33,	0x24,	0x2D },
		 { 0x86,	0x90,	0x22,	0x32,	0x24,	0x2D },
		 { 0x85,	0x8F,	0x22,	0x32,	0x24,	0x2D },
		 { 0x84,	0x8E,	0x22,	0x31,	0x24,	0x2D },
		 { 0x84,	0x8E,	0x21,	0x30,	0x23,	0x2D },
		 { 0x83,	0x8D,	0x21,	0x2F,	0x23,	0x2D },
		 { 0x83,	0x8D,	0x21,	0x2F,	0x23,	0x2C },
		 { 0x82,	0x8C,	0x20,	0x2E,	0x23,	0x2C },
		 { 0x82,	0x8C,	0x20,	0x2D,	0x23,	0x2C },
		 { 0x81,	0x8B,	0x1F,	0x2C,	0x23,	0x2C },
		 { 0x81,	0x8B,	0x1F,	0x2C,	0x23,	0x2C },
		 { 0x80,	0x8A,	0x1F,	0x2B,	0x22,	0x2C },
		 { 0x3B,	0x89,	0x1E,	0x2A,	0x22,	0x2C },
		 { 0x3B,	0x89,	0x1E,	0x29,	0x22,	0x2B },
		 { 0x3A,	0x88,	0x1E,	0x28,	0x22,	0x2B },
		 { 0x3A,	0x88,	0x1D,	0x28,	0x22,	0x2B },
		 { 0x39,	0x87,	0x1D,	0x27,	0x22,	0x2B },
		 { 0x38,	0x86,	0x1D,	0x26,	0x22,	0x2B },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 }
	 };*/
	 
	 /*const byte oktober[31][6] = {
		 { 0x38,	0x86,	0x1C,	0x25,	0x21,	0x2B },
		 { 0x37,	0x85,	0x1C,	0x24,	0x21,	0x2B },
		 { 0x37,	0x85,	0x1C,	0x23,	0x21,	0x2B },
		 { 0x36,	0x84,	0x1B,	0x23,	0x21,	0x2B },
		 { 0x36,	0x84,	0x1B,	0x22,	0x21,	0x2B },
		 { 0x35,	0x83,	0x1B,	0x21,	0x21,	0x2B },
		 { 0x34,	0x82,	0x1B,	0x20,	0x21,	0x2B },
		 { 0x34,	0x82,	0x1A,	0x1F,	0x21,	0x2B },
		 { 0x33,	0x81,	0x1A,	0x1E,	0x21,	0x2B },
		 { 0x33,	0x81,	0x1A,	0x1D,	0x21,	0x2B },
		 { 0x32,	0x80,	0x19,	0x1C,	0x21,	0x2B },
		 { 0x32,	0x80,	0x19,	0x1B,	0x21,	0x2B },
		 { 0x31,	0x3B,	0x19,	0x1B,	0x21,	0x2B },
		 { 0x31,	0x3B,	0x19,	0x1C,	0x21,	0x2B },
		 { 0x30,	0x3A,	0x19,	0x1C,	0x21,	0x2B },
		 { 0x30,	0x3A,	0x18,	0x1D,	0x21,	0x2B },
		 { 0x2F,	0x39,	0x18,	0x1D,	0x21,	0x2B },
		 { 0x2E,	0x38,	0x18,	0x1E,	0x21,	0x2B },
		 { 0x2E,	0x38,	0x18,	0x1E,	0x21,	0x2B },
		 { 0x2D,	0x37,	0x18,	0x1F,	0x21,	0x2B },
		 { 0x2D,	0x37,	0x17,	0x1F,	0x21,	0x2C },
		 { 0x2D,	0x37,	0x17,	0x20,	0x21,	0x2C },
		 { 0x2C,	0x36,	0x17,	0x21,	0x21,	0x2C },
		 { 0x2C,	0x36,	0x17,	0x21,	0x21,	0x2C },
		 { 0x2B,	0x35,	0x17,	0x22,	0x21,	0x2C },
		 { 0x2B,	0x35,	0x17,	0x22,	0x21,	0x2C },
		 { 0x2A,	0x34,	0x17,	0x23,	0x21,	0x2D },
		 { 0x2A,	0x34,	0x16,	0x23,	0x21,	0x2D },
		 { 0x29,	0x33,	0x16,	0x24,	0x21,	0x2D },
		 { 0x29,	0x33,	0x16,	0x24,	0x21,	0x2D },
		 { 0x29,	0x33,	0x16,	0x25,	0x22,	0x2E }
	 };*/

	 /*const byte november[31][6] = {
		 { 0x28,	0x32,	0x16,	0x25,	0x22,	0x2E },
		 { 0x28,	0x32,	0x16,	0x26,	0x22,	0x2E },
		 { 0x28,	0x32,	0x16,	0x26,	0x22,	0x2F },
		 { 0x27,	0x31,	0x16,	0x27,	0x22,	0x2F },
		 { 0x27,	0x31,	0x16,	0x27,	0x22,	0x2F },
		 { 0x27,	0x31,	0x16,	0x28,	0x23,	0x30 },
		 { 0x26,	0x30,	0x16,	0x28,	0x23,	0x30 },
		 { 0x26,	0x30,	0x16,	0x29,	0x23,	0x30 },
		 { 0x26,	0x30,	0x16,	0x29,	0x23,	0x31 },
		 { 0x26,	0x30,	0x17,	0x2A,	0x24,	0x31 },
		 { 0x25,	0x2F,	0x17,	0x2A,	0x24,	0x31 },
		 { 0x25,	0x2F,	0x17,	0x2B,	0x24,	0x32 },
		 { 0x25,	0x2F,	0x17,	0x2B,	0x25,	0x32 },
		 { 0x25,	0x2F,	0x17,	0x2C,	0x25,	0x33 },
		 { 0x25,	0x2F,	0x17,	0x2C,	0x25,	0x33 },
		 { 0x25,	0x2F,	0x17,	0x2D,	0x26,	0x34 },
		 { 0x24,	0x2E,	0x18,	0x2D,	0x26,	0x34 },
		 { 0x24,	0x2E,	0x18,	0x2E,	0x26,	0x35 },
		 { 0x24,	0x2E,	0x18,	0x2E,	0x27,	0x35 },
		 { 0x24,	0x2E,	0x18,	0x2F,	0x27,	0x36 },
		 { 0x24,	0x2E,	0x19,	0x30,	0x27,	0x36 },
		 { 0x24,	0x2E,	0x19,	0x30,	0x28,	0x37 },
		 { 0x24,	0x2E,	0x19,	0x31,	0x28,	0x37 },
		 { 0x24,	0x2E,	0x19,	0x31,	0x29,	0x38 },
		 { 0x24,	0x2E,	0x1A,	0x32,	0x29,	0x38 },
		 { 0x24,	0x2E,	0x1A,	0x32,	0x29,	0x39 },
		 { 0x24,	0x2E,	0x1A,	0x33,	0x2A,	0x39 },
		 { 0x24,	0x2E,	0x1B,	0x33,	0x2A,	0x3A },
		 { 0x25,	0x2F,	0x1B,	0x34,	0x2B,	0x3A },
		 { 0x25,	0x2F,	0x1B,	0x35,	0x2B,	0x3B },
		 { 0x00,	0x00,	0x00,	0x00,	0x00,	0x00 }
	 };*/

	 /*const byte desember[31][6] = {
		 { 0x25,	0x2F,	0x1C,	0x35,	0x2C,	0x80 },
		 { 0x25,	0x2F,	0x1C,	0x36,	0x2C,	0x80 },
		 { 0x25,	0x2F,	0x1C,	0x36,	0x2D,	0x81 },
		 { 0x25,	0x2F,	0x1D,	0x37,	0x2D,	0x81 },
		 { 0x26,	0x30,	0x1D,	0x37,	0x2E,	0x82 },
		 { 0x26,	0x30,	0x1E,	0x38,	0x2E,	0x82 },
		 { 0x26,	0x30,	0x1E,	0x38,	0x2F,	0x83 },
		 { 0x26,	0x30,	0x1E,	0x39,	0x2F,	0x84 },
		 { 0x27,	0x31,	0x1F,	0x3A,	0x30,	0x84 },
		 { 0x27,	0x31,	0x1F,	0x3A,	0x30,	0x85 },
		 { 0x27,	0x31,	0x20,	0x3B,	0x31,	0x85 },
		 { 0x28,	0x32,	0x20,	0x3B,	0x31,	0x86 },
		 { 0x28,	0x32,	0x21,	0x80,	0x32,	0x86 },
		 { 0x28,	0x32,	0x21,	0x80,	0x32,	0x87 },
		 { 0x29,	0x33,	0x22,	0x81,	0x33,	0x88 },
		 { 0x29,	0x33,	0x22,	0x81,	0x33,	0x88 },
		 { 0x2A,	0x34,	0x23,	0x82,	0x34,	0x89 },
		 { 0x2A,	0x34,	0x23,	0x83,	0x34,	0x89 },
		 { 0x2B,	0x35,	0x24,	0x83,	0x35,	0x8A },
		 { 0x2B,	0x35,	0x24,	0x84,	0x35,	0x8A },
		 { 0x2B,	0x35,	0x25,	0x84,	0x36,	0x8B },
		 { 0x2C,	0x36,	0x25,	0x85,	0x36,	0x8B },
		 { 0x2C,	0x36,	0x26,	0x85,	0x37,	0x8C },
		 { 0x2D,	0x37,	0x26,	0x86,	0x37,	0x8C },
		 { 0x2E,	0x38,	0x27,	0x86,	0x38,	0x8D },
		 { 0x2E,	0x38,	0x27,	0x86,	0x38,	0x8D },
		 { 0x2F,	0x39,	0x28,	0x87,	0x39,	0x8D },
		 { 0x2F,	0x39,	0x28,	0x87,	0x39,	0x8E },
		 { 0x30,	0x3A,	0x29,	0x88,	0x3A,	0x8E },
		 { 0x30,	0x3A,	0x29,	0x88,	0x3A,	0x8F },
		 { 0x31,	0x3B,	0x2A,	0x89,	0x3B,	0x8F }
	 };*/
};

extern DataJadwalSholat jadwalSholat;

#endif
