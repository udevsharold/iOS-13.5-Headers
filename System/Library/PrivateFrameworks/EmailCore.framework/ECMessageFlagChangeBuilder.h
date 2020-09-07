/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ECMessageFlagChangeBuilder
@property (assign,nonatomic) long long reason; 
@required
-(long long)reason;
-(void)setReason:(long long)arg1;
-(void)changesReadTo:(BOOL)arg1;
-(void)changesDeletedTo:(BOOL)arg1;
-(void)changesRepliedTo:(BOOL)arg1;
-(void)changesFlaggedTo:(BOOL)arg1;
-(void)changesFlagColorTo:(unsigned long long)arg1;
-(void)changesForwardedTo:(BOOL)arg1;
-(void)changesRedirectedTo:(BOOL)arg1;
-(void)changesJunkLevelTo:(unsigned long long)arg1;
-(void)changesDraftTo:(BOOL)arg1;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg1;

@end
