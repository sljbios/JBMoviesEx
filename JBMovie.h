//
//  JBMovie.h
//  JBMoviesEx
//
//  Created by Steve Levin on 6/21/13.
//  Copyright (c) 2013 com.aaa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JBMovie : NSObject

@property (nonatomic, copy) NSString * title;
@property (nonatomic, copy) NSString * storyline;
@property (nonatomic, assign) float boxOfficeGross;
@property (nonatomic, readonly) UIImage * image;

-(id)initWithTitle: (NSString *) title
    boxOfficeGross: (float) newBoxOfficeGross
         storyline: (NSString *) newStoryline;

@end
