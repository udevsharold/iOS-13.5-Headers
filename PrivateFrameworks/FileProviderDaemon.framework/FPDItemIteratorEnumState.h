/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPXPCAutomaticErrorProxyFPXEnumerator;
@class FPItem, NSData;

@interface FPDItemIteratorEnumState : NSObject {

	FPItem* _parentItem;
	id<FPXPCAutomaticErrorProxy><FPXEnumerator> _enumerator;
	NSData* _nextPage;

}

@property (nonatomic,retain) FPItem * parentItem;                                                 //@synthesize parentItem=_parentItem - In the implementation block
@property (nonatomic,retain) id<FPXPCAutomaticErrorProxy><FPXEnumerator> enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,retain) NSData * nextPage;                                                   //@synthesize nextPage=_nextPage - In the implementation block
-(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)enumerator;
-(FPItem *)parentItem;
-(void)setParentItem:(FPItem *)arg1 ;
-(NSData *)nextPage;
-(void)setEnumerator:(id<FPXPCAutomaticErrorProxy><FPXEnumerator>)arg1 ;
-(void)setNextPage:(NSData *)arg1 ;
@end

