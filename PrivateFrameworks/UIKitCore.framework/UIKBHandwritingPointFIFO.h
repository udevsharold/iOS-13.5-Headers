/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)clear;
-(void)flush;
-(UIKBHandwritingPointFIFO *)nextFIFO;
-(void)addPoint:(SCD_Struct_UI88)arg1 ;
-(void)emitPoint:(SCD_Struct_UI88)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg1 ;
@end

