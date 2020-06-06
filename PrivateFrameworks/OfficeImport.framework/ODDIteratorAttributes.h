/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODDIteratorAttributes : NSObject {

	int mAxis;
	int mPointType;
	BOOL mHideLastTransition;
	int mStart;
	unsigned mCount;
	int mStep;

}
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(int)start;
-(int)step;
-(int)axis;
-(void)setAxis:(int)arg1 ;
-(void)setStart:(int)arg1 ;
-(void)setStep:(int)arg1 ;
-(int)pointType;
-(void)setPointType:(int)arg1 ;
-(BOOL)hideLastTransition;
-(void)setHideLastTransition:(BOOL)arg1 ;
@end

