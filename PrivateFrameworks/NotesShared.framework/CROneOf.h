/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRDataType.h>

@class CRSet, NSMapTable, NSString;

@interface CROneOf : NSObject <CRDataType> {

	CRSet* _set;
	NSMapTable* _timestamps;

}

@property (nonatomic,retain) NSMapTable * timestamps;               //@synthesize timestamps=_timestamps - In the implementation block
@property (nonatomic,retain) CRSet * set;                           //@synthesize set=_set - In the implementation block
@property (nonatomic,retain) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRSet *)set;
-(void)setSet:(CRSet *)arg1 ;
-(id)contents;
-(id)tombstone;
-(NSMapTable *)timestamps;
-(void)addItem:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(void)setUpdated:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)setTimestamps:(NSMapTable *)arg1 ;
-(id)timestampForNewItem;
@end

