/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIAngularSparkUpdate : NSObject {

	float _finalBirthTime;
	float _finalDeathTime;
	SCD_Struct_AR5* _sparks;
	unsigned long long _particleCount;
	unsigned long long _bufferOffset;

}

@property (nonatomic,readonly) SCD_Struct_AR5* sparks;                        //@synthesize sparks=_sparks - In the implementation block
@property (nonatomic,readonly) unsigned long long particleCount;              //@synthesize particleCount=_particleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long bufferOffset;               //@synthesize bufferOffset=_bufferOffset - In the implementation block
@property (assign,nonatomic) float finalBirthTime;                            //@synthesize finalBirthTime=_finalBirthTime - In the implementation block
@property (assign,nonatomic) float finalDeathTime;                            //@synthesize finalDeathTime=_finalDeathTime - In the implementation block
-(void)dealloc;
-(unsigned long long)bufferOffset;
-(unsigned long long)particleCount;
-(SCD_Struct_AR5*)sparks;
-(float)finalBirthTime;
-(float)finalDeathTime;
-(id)updateByAppendingUpdate:(id)arg1 ;
-(id)initWithParticleCount:(unsigned long long)arg1 bufferOffset:(unsigned long long)arg2 ;
-(void)setFinalBirthTime:(float)arg1 ;
-(void)setFinalDeathTime:(float)arg1 ;
@end

