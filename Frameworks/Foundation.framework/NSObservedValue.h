/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NSObservedValue : NSObject {

	id _contents;
	id _lastOriginator;
	int _tag;

}

@property (retain) id value; 
@property (retain) NSError * error; 
@property (assign) BOOL finished; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSError *)error;
-(id)value;
-(BOOL)_isToManyChangeInformation;
-(void)setValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(id)copyToHeap;
@end

