/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMatchingAlgorithmMatch
@property (nonatomic,readonly) long long matchCost; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
@required
-(long long)matchCost;
-(long long)compareToMatch:(id)arg1;
-(BOOL)conflictsWithMatch:(id)arg1;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;

@end

