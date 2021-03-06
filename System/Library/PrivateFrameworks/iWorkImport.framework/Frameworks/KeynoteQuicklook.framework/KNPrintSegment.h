/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KNSlideNode;

@interface KNPrintSegment : NSObject {

	KNSlideNode* _slideNode;
	unsigned long long _buildIndex;
	unsigned long long _notesIndex;
	long long _commentsPageIndex;
	unsigned long long _span;

}

@property (nonatomic,readonly) KNSlideNode * slideNode;                    //@synthesize slideNode=_slideNode - In the implementation block
@property (nonatomic,readonly) unsigned long long buildIndex;              //@synthesize buildIndex=_buildIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long notesIndex;              //@synthesize notesIndex=_notesIndex - In the implementation block
@property (nonatomic,readonly) long long commentsPageIndex;                //@synthesize commentsPageIndex=_commentsPageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long span;                    //@synthesize span=_span - In the implementation block
-(unsigned long long)span;
-(KNSlideNode *)slideNode;
-(unsigned long long)buildIndex;
-(unsigned long long)notesIndex;
-(id)initWithSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2 notesIndex:(unsigned long long)arg3 span:(unsigned long long)arg4 ;
-(long long)commentsPageIndex;
-(id)initWithSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2 notesIndex:(unsigned long long)arg3 commentsPageIndex:(long long)arg4 span:(unsigned long long)arg5 ;
@end

