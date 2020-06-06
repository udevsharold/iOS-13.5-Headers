/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFZlibDataDecompressionOptions : NSObject {

	BOOL _decompressAllAtOnce;
	int _windowBits;
	/*^block*/id _createBuffer;
	/*^block*/id _growData;

}

@property (assign,nonatomic) int windowBits;                        //@synthesize windowBits=_windowBits - In the implementation block
@property (nonatomic,copy) id createBuffer;                         //@synthesize createBuffer=_createBuffer - In the implementation block
@property (nonatomic,copy) id growData;                             //@synthesize growData=_growData - In the implementation block
@property (assign,nonatomic) BOOL decompressAllAtOnce;              //@synthesize decompressAllAtOnce=_decompressAllAtOnce - In the implementation block
+(id)defaultOptions;
-(int)windowBits;
-(void)setWindowBits:(int)arg1 ;
-(void)setCreateBuffer:(id)arg1 ;
-(void)setGrowData:(id)arg1 ;
-(id)createBuffer;
-(id)growData;
-(BOOL)decompressAllAtOnce;
-(void)setDecompressAllAtOnce:(BOOL)arg1 ;
@end

