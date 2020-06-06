/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation {

	MPMediaLibraryView* _libraryView;
	Class _modelClass;
	NSArray* _identifierSets;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPMediaLibraryView * libraryView;              //@synthesize libraryView=_libraryView - In the implementation block
@property (assign,nonatomic) Class modelClass;                            //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,copy) NSArray * identifierSets;                      //@synthesize identifierSets=_identifierSets - In the implementation block
@property (nonatomic,copy) id responseHandler;                            //@synthesize responseHandler=_responseHandler - In the implementation block
+(BOOL)supportsModelClass:(Class)arg1 ;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(MPMediaLibraryView *)libraryView;
-(void)setLibraryView:(MPMediaLibraryView *)arg1 ;
-(Class)modelClass;
-(void)setModelClass:(Class)arg1 ;
-(NSArray *)identifierSets;
-(void)setIdentifierSets:(NSArray *)arg1 ;
@end

